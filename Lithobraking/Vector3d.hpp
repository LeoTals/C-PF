//
//  Vector3d.hpp
//  Lithobraking
//
//  Created by Leo Talsta on 15.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#ifndef Vector3d_hpp
#define Vector3d_hpp
#include <stdexcept>
#include <math.h>

/*
 not currently used, decided to downgrade to 2d
 */


/* very narrowly defined for simplicity's sake. using doubles for minimal rounding errors*/

class Vector3d{
    
public:
    Vector3d();
    Vector3d(double x, double y, double z);
    
    Vector3d &  operator = (Vector3d const &);
    double operator[] (const int);
    const double operator[] (const int) const;
    
    Vector3d    operator + (Vector3d const &);
    Vector3d    operator - (Vector3d const &);
    Vector3d    operator * (double const &);
    double      operator * (Vector3d const &) const;
    // Dot product of two vectors is a scalar
    Vector3d    operator / (Vector3d const &);
    // OBS! Cross product, division not defined for vectors, simply reusing the operation symbol
    
    double angle(Vector3d const &) const; //radians, as is right and just
    double length() const;
    
    
private:
    double x_;
    double y_;
    double z_;
    
};

#endif /* Vector3d_hpp */
