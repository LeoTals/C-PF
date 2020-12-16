//
//  body.cpp
//  Lithobraking
//
//  Created by Leo Talsta on 15.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#include "body.hpp"

Body::Body(double mass, double radius, Vector3d velocity, Vector3d location):
mass_(mass), radius_(radius), velocity_(velocity), forcesum_(), location_(location) {}

void Body::applyforce(Vector3d force) {
    forcesum_ = forcesum_ + force;
}

void Body::update(<#double#> dt) {
    // F = ma <> a = F/m
    Vector3d acceleration = forcesum_ * (1/mass_);
    velocity_ = velocity_ + acceleration * dt;
    location_ = location_ + velocity_ * dt;
    
}
