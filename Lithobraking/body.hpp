//
//  body.hpp
//  Lithobraking
//
//  Created by Leo Talsta on 15.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#ifndef body_hpp
#define body_hpp

#include "Vector2d.hpp"
#include <chrono>

class Body{
  
public:
    Body(){}
    Body(double mass, double radius, Vector2d velocity, Vector2d location, Vector2d orientation);
    
    double getmass() const{ return mass_; }
    double getradius() const{ return radius_;}
    Vector2d getlocation(){ return location_;}
    
    Vector2d gravity(Body &);
    /*
     calculates gravity using
     Newtonian physics
     */
    void update(double dtms, Body &);
    
    
private:
    Vector2d location_;
    Vector2d velocity_;
    Vector2d orientation_; //unit vector, size 1
    
    double mass_;
    double radius_;
    static constexpr double G = 6.67384e-11;
    
};

#endif /* body_hpp */
