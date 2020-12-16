//
//  body.hpp
//  Lithobraking
//
//  Created by Leo Talsta on 15.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#ifndef body_hpp
#define body_hpp

#include "Vector3d.hpp"
#include <chrono>

class Body{
  
public:
    
    Body(double mass, double radius, Vector3d velocity, Vector3d location);
    
    void applyforce(Vector3d);
    void update(double);
    
    double getmass();
    double getradius();
    Vector3d getvelocity();
    Vector3d getforces();
    Vector3d getlocation();
    double distance(Body);
    //Vector3d relativevel(Body);
    //not needed for this application, but might add later.
    
private:
    
    double mass_; // kilogram
    double radius_; // m
    /*
     all objects will be modeled as uniform balls
     for simplicity's sake.
     */
    Vector3d velocity_; // m/s
    Vector3d forcesum_; // N
    Vector3d location_; // m
    /*
     To make things more manageable, the centre of the
     celestial body in Lithobraking will be located at
     the origin of the coordinate grid.
     */
    
};

#endif /* body_hpp */
