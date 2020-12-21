//
//  Vector2d.hpp
//  Lithobraking
//
//  Created by Leo Talsta on 21.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#ifndef Vector2d_hpp
#define Vector2d_hpp
#include <math.h>
#include <stdexcept>

class Vector2d{
public:
    Vector2d();
    Vector2d(double,double);
    
    double      getx() const;
    double      gety() const;
   
    Vector2d &  operator=(Vector2d const &);
    Vector2d    operator+(Vector2d const &);
    Vector2d    operator-(Vector2d const &);
    Vector2d    operator*(double const &);
    Vector2d    operator/(double const &);
    
    /*dot product of two vectors*/
    double      operator*(Vector2d const &) const;
    /* this is NOT division, this is cross product.
     not needed at the moment, hence commented out. */
  //  double      operator/(Vector2d const &) const;
    
    double      angle(Vector2d const &) const;
    /* measured in radians */
    double      length() const;
    
    
    
private:
    double      x_;
    double      y_;
};




#endif /* Vector2d_hpp */
