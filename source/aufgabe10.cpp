#include <vector>
#define CATCH_CONFIG_RUNNER
#include "../external/catch-1.1/catch.hpp"

bool is_even (int n){
    return n % 2 == 0;
}

bool is_uneven (int n){
    return n % 2 != 0;
}

template<typename container, typename prädikat>
container filter(container c, prädikat p){
    container c2;
    //c.erase(std::remove_if(c.begin(), c.end(), is_uneven), c.end());
    for(auto i = c.begin(); i != c.end(); ++i ){
        if(is_even(*i) == true){
            c2.push_back(*i);
        } 
    }
}

TEST_CASE ("filter alle ungeraden", "[erase]"){
    std :: vector <int > v {1 ,2 ,3 ,4 ,5 ,6};
    std :: vector <int > alleven = filter (v, is_even);

    REQUIRE (std::all_of(alleven.begin(), alleven.end(), is_even));
}

int main(int argc, char* argv[]){

    return Catch::Session().run(argc, argv); 

}