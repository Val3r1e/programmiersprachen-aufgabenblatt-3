#define CATCH_CONFIG_RUNNER
#include "../external/catch-1.1/catch.hpp"
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream> // std :: cout
#include <iterator> // std :: ostream_iterator <>


bool dividable_by_3 (int i){
    return (i % 3) != 0;  
}

bool is_multiple_of_3 (int i){
    return (i % 3) == 0;  
}

TEST_CASE ("filter alle vielfache von drei", "[erase]"){
    std::vector<unsigned int > v1 (100);                  //Neuer Vektor
    for (auto& v : v1) {
		  v = std::rand() % 101;                       //Fügt von 0-100 random zahlen ein
    }

    std::cout<< "Filled vector: \n";                    
    std::copy(std::begin(v1), std::end(v1), std::ostream_iterator <int>(std::cout, "\n"));

    v1.erase( std::remove_if(v1.begin(), v1.end(), dividable_by_3), v1.end());       //Nicht durch 3 teilbare entfernen
    std::cout<< "Vector only with numbers dividable by 3: \n";
    std::copy(std::begin(v1), std::end(v1), std::ostream_iterator <int>(std::cout, "\n"));

   
    REQUIRE (std::all_of(v1.begin(), v1.end(), is_multiple_of_3 ));             //Test
}


int main(int argc, char *argv[])
{


    return Catch::Session().run(argc, argv );
}