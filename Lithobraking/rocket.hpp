//
//  rocket.hpp
//  Lithobraking
//
//  Created by Leo Talsta on 16.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#ifndef rocket_hpp
#define rocket_hpp
#include "body.hpp"

class Rocket:public Body{
    Rocket(double mass, double radius, double thrust, double location, Vector3d velocity);
    
    
private:
    double maxthrust_;
    double thrustpercent_;
    //Vector3d orientation_; //where the ship is pointed
    /* not implemented yet*/
};

#endif /* rocket_hpp */
