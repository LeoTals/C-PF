//
//  Vector2d.cpp
//  Lithobraking
//
//  Created by Leo Talsta on 21.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#include "Vector2d.hpp"

Vector2d::Vector2d(): x_(0), y_(0){}
Vector2d::Vector2d(double x, double y): x_(x), y_(y){}

Vector2d & Vector2d::operator=(Vector2d const &V){
    x_ = V.getx();
    y_ = V.gety();
    return *this;
}
Vector2d Vector2d::operator+(Vector2d const &V){
    x_ += V.getx();
    y_ += V.gety();
    return *this;
}
Vector2d Vector2d::operator-(Vector2d const &V){
    x_ -= V.getx();
    y_ -= V.gety();
    return *this;
}
Vector2d Vector2d::operator*(const double &D){
    x_ *= D;
    y_ *= D;
    return *this;
}

Vector2d Vector2d::operator/(const double &D){
    if(D == 0) {
        throw std::runtime_error("division by zero");
    }
    else{
        return *this * (1/D);
    }
}
double Vector2d::operator*(Vector2d const &V) const{
    return x_ * V.getx() + y_ * V.gety();
}
/*double Vector2d::operator/(Vector2d const &V) const{
    return x_ * V.gety() - V.getx() * y_;
}
*/

double Vector2d::angle(Vector2d const &V) const{
    double dotproduct = *this * V;
    double cosangle = dotproduct / (this->length() * V.length());
    return acos(cosangle);
}

double Vector2d::length() const{
    return sqrt(x_ * x_ + y_ * y_);
}
