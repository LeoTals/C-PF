//
//  body.cpp
//  Lithobraking
//
//  Created by Leo Talsta on 15.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#include "body.hpp"

Body::Body(double mass, double radius, Vector2d velocity, Vector2d location, Vector2d orientation):
mass_(mass), radius_(radius), velocity_(velocity), location_(location), orientation_(orientation){}

Vector2d Body::gravity(Body &P){
    Vector2d direction = P.getlocation() - location_;
    double distance = direction.length();
    Vector2d unitdir = direction/distance;
    double magnitude = G * mass_ * P.getmass() /(distance*distance);
    return unitdir * magnitude;
}

void Body::update(double dtms, Body &parent) {
    // F = ma <> a = F/m
    
    
}
