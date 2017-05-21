#include "circle.hpp"
#include "vec2.hpp"
#include <cmath>

//Konstruktor

Circle::Circle (Vec2 m, float r, Color c): 
    m_(m),
    r_(r),
    c_(c) {}

//Methoden

Vec2 Circle::getMiddle () const {
    return m_;
}

float Circle::getRadius () const{
    return r_;
}

Color Circle::getColor () const{
    return c_;
}

float Circle::circumference () const{
    return 2*M_PI*r_; 
}

//Aufg. 3.7

bool Circle::operator <( Circle const& c1) const{
    if(r_ < c1.r_){
        return true;
    }
    else{
        return false;
    }
}

bool Circle::operator >( Circle const& c1) const{
    if(r_ > c1.r_){
        return true;
    }
    else{
        return false;
    }
}

bool Circle::operator ==( Circle const& c1) const{
    if(r_ == c1.r_){
        return true;
    }
    else{
        return false;
    }
}