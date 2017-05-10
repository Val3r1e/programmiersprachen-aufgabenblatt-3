#include <list>
#include <vector>
# include <cstdlib>
# include <iostream> // std :: cout

int main (){
    std::list <unsigned int> l1 (100); //int kann nicht neg. werden
    for (auto& l : l1) {
		l = std::rand() % 101;              //Fügt von 0-100 random zahlen ein
	}
    /*std::copy(std::begin(l1), std::end(l1), 
		std::ostream_iterator <int>(std::cout, "\n"));*/
    
    std::vector<unsigned int > v1 (l1.size());
    std::copy(std::begin(l1), std::end(l1), std::begin(v1));
    
    /*std::copy(std::begin(l1), std::end(l1), 
		std::ostream_iterator <int>(std::cout, "\n"));*/
}