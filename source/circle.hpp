#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"
//#include "window.hpp"

class Circle 
{
    private:
        Vec2 m_;
        float r_;
        Color c_;

    public:

        Circle (Vec2 m, float r, Color c);

        Vec2 getMiddle () const;

        float getRadius () const;

        Color getColor () const;

        float circumference () const;

        bool is_inside (Vec2 const& v);

        bool operator <( Circle const& c1)const;

        bool operator >( Circle const& c1)const;

        bool operator ==( Circle const& c1)const;

};

        

#endif