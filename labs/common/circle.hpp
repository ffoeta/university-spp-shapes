#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

namespace lyachko
{

  class Circle : public Shape
  {

  public:

    Circle(const point_t & new_center, double new_r);
    virtual ~Circle() = default;
    virtual double getArea() const override;
    virtual rectangle_t getFrameRect()  const override;
    virtual void move(const point_t & new_center) override;
    virtual void move(double dx, double dy) override;
    virtual void scale(double scale_coef) override;
    virtual void rotate(double angle) override;

  private:

    point_t center_;
    double r_;
    double angle_;

  };

}

#endif
