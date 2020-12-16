//
//  Vector3d.cpp
//  Lithobraking
//
//  Created by Leo Talsta on 15.12.2020.
//  Copyright © 2020 Leo Talsta. All rights reserved.
//

#include "Vector3d.hpp"

Vector3d::Vector3d(): x_(0), y_(0), z_(0) {}

Vector3d::Vector3d(double x, double y, double z):
x_(x) , y_(y), z_(z) {}

Vector3d & Vector3d::operator=(<#const Vector3d &#> otherV) {
    x_ = otherV[0];
    y_ = otherV[1];
    z_ = otherV[2];
    return *this;
}

const double Vector3d::operator[](const int index) const{
    switch(index) {
        case 0:
            return x_;
            break;
        case 1:
            return y_;
            break;
        case 2:
            return z_;
            break;
        default:
            throw std::out_of_range("invalid index");
    }
    return 0;
}

double Vector3d::operator[](<#const int#> index) {
    switch(index) {
        case 0:
            return x_;
            break;
        case 1:
            return y_;
            break;
        case 2:
            return z_;
            break;
        default:
            throw std::out_of_range("invalid index");
    }
    return 0;
}

Vector3d Vector3d::operator+(<#const Vector3d &#> otherV) {
    x_ += otherV[0];
    y_ += otherV[1];
    z_ += otherV[2];
    return *this;
}

Vector3d Vector3d::operator-(<#const Vector3d &#> otherV) {
    x_ -= otherV[0];
    y_ -= otherV[1];
    z_ -= otherV[2];
    return *this;
}

double Vector3d::operator*(Vector3d const & otherV) const{
    return x_*otherV[0]+y_*otherV[1]+z_*otherV[2];
}

Vector3d Vector3d::operator/(Vector3d const & otherV) {
    double sx = y_ * otherV[2] - z_ * otherV[1];
    double sy = z_ * otherV[0] - x_ * otherV[2];
    double sz = x_ * otherV[1] - y_ * otherV[0];
    Vector3d crossproduct(sx,sy,sz);
    return crossproduct;
}

double Vector3d::angle(Vector3d const & otherV) const{
    double dotproduct = *this * otherV;
    double cosangle = dotproduct / (this->length() * otherV.length());
    return acos(cosangle);
}

double Vector3d::length() const {
    return sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}
