#include "vec2.hpp"

Vec2::Vec2(): x_(0), y_(0) {}

Vec2::Vec2(float x,float y): x_(x), y_(y) {}

Vec2::Vec2 (Vec2 const& v): x_(v.x_), y_(v.y_) {}

Vec2 & Vec2::operator +=( Vec2 const & v){
    x_ += v.x_;
    y_ += v.y_;
    return *this;
}

Vec2 & Vec2::operator -=( Vec2 const & v){
    x_ -= v.x_;
    y_ -= v.y_;
    return *this;
}

Vec2 & Vec2::operator *=( float s){
    x_ *= s;
    y_ *= s;
    return *this;
}

Vec2 & Vec2::operator /=( float s){
    x_ /= s;
    y_ /= s;
    return *this;
}

Vec2 const operator +( Vec2 const & u, Vec2 const & v){
    return Vec2(u) += v;
}

Vec2 const operator -( Vec2 const & u, Vec2 const & v){
    return Vec2(u) -= v;
}

Vec2 const operator *( Vec2 const & v, float s){
    return Vec2(v) *= s;
}

Vec2 const operator /( Vec2 const & v, float s){
    return Vec2(v) /= s;
}

Vec2 const operator *( float s, Vec2 const & v){
    return Vec2(v) *= s;
}

       
    


