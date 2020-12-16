//
//  Vector3d.hpp
//  Lithobraking
//
//  Created by Leo Talsta on 15.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#ifndef Vector3d_hpp
#define Vector3d_hpp

/* very narrowly defined for simplicity's sake. using long doubles for minimal rounding errors*/

class Vector3d{
    
public:
    Vector3d();
    Vector3d(long double x, long double y, long double z);
    
    Vector3d &  operator = (Vector3d const &);
    long double operator[] (const int);
    
    Vector3d    operator + (Vector3d const &);
    Vector3d    operator - (Vector3d const &);
    Vector3d    operator * (long double const &);
    long double operator * (Vector3d const &);
    // Dot product of two vectors is a scalar
    Vector3d    operator / (Vector3d const &);
    // OBS! Cross product, division not defined for vectors, simply reusing the operation symbol
    long double length() const;
    
    
private:
    long double x_;
    long double y_;
    long double z_;
    
};

#endif /* Vector3d_hpp */
