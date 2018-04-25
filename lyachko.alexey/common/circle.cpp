#include "circle.hpp"
#include <math.h>
#include <iostream>

namespace lyachko
{

	Circle::Circle(const point_t & new_center, double new_r): 
   m_center(new_center), 
   m_r(new_r)
  {
    if (m_r < 0.0) 
    {
      throw std::invalid_argument("Radius must be greater than 0");
    }
  }

	double Circle::getArea() const
	{   
	  return double(M_PI * m_r * m_r);
	}

	rectangle_t Circle::getFrameRect() const
	{
	  return {m_center, m_r * 2, m_r * 2};
	}

	void Circle::move(double dx, double dy)
	{
	  m_center.x += dx;
	  m_center.y += dy;
	}

	void Circle::move(const point_t & new_center)
	{
	  m_center = new_center;
	}

	void Circle::scale(double scale_coef)
	{
		if (scale_coef <= 0.0)
    {
      throw std::invalid_argument("Scale coef must be greater than or even 0");
    }
		m_r *= scale_coef;
	}

}