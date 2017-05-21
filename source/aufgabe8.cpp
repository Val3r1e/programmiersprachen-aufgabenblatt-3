#include "circle.hpp"
#include"vec2.hpp"
#include <vector>
#define CATCH_CONFIG_RUNNER
#include "../external/catch-1.1/catch.hpp"

TEST_CASE ("sort circle", "[sort]"){
    std::vector <Circle> vc;                                    //Vector vc
    Circle c1 (Vec2(400.0f,400.0f), 300.0f,Color(0.0));         //Circle erstellen
    Circle c2 (Vec2(400.0f,400.0f), 200.0f,Color(0.0));
    Circle c3 (Vec2(400.0f,400.0f), 400.0f,Color(0.0));
    Circle c4 (Vec2(400.0f,400.0f), 600.0f,Color(0.0));
    Circle c5 (Vec2(400.0f,400.0f), 100.0f,Color(0.0));
    vc.push_back(c1);                                           //Circle einfügen
    vc.push_back(c2);
    vc.push_back(c3);
    vc.push_back(c4);
    vc.push_back(c5);
    std::sort(vc.begin(), vc.end(),[](Circle r1, Circle r2) {return r1 < r2;}), vc.end();          //mit lambda sortieren 
    REQUIRE(std::is_sorted(vc.begin(),vc.end()));
}

int main(int argc, char* argv[]){

    return Catch::Session().run(argc, argv); 
}