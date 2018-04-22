#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "base-types.hpp"

namespace lyachko {

  //Abstract class Shape, used to make others
  class Shape
  {

  //Public methods, fucntions and variables
  public:

    //Pure virtual function returning area
    virtual double getArea() const = 0;

    //Pure virtual fucntion returning rectangle, sorrounding the object
    virtual rectangle_t getFrameRect() const = 0;

    //Pure virtual method moving object to the new coordinates
    virtual void move(const point_t & new_center) = 0;

    //Pure virtual method, shifting coordinates
    virtual void move(double dx, double dy) = 0;

    //Pure virlual method changing size of the object
    virtual void scale(double scale_coef) = 0;

  };

}
#endif 
