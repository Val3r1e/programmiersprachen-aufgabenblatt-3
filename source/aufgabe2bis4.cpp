#include <list>
#include <vector>
#include <set>
# include <cstdlib>
# include <iostream> // std :: cout
# include <iterator> // std :: ostream_iterator <>
# include <algorithm> // std :: reverse , std :: generate


int main (){
    std::list <unsigned int> l1 (100);           //int kann nicht neg. werden
    for (auto& l : l1) {
		l = std::rand() % 101;                       //Fügt von 0-100 random zahlen ein
	  }

    std::vector<unsigned int > v1 (l1.size());
    std::copy(std::begin(l1), std::end(l1), std::begin(v1));

    std::set <unsigned int> s1;

    for(auto& s : l1){                            //Jede Zahl kommt nur einmal vor 
      s1.insert(s);
    }

    std::cout<< "Es befinden sich " << s1.size() << " verschiedene Zahlen in der Liste. \n";
    std::cout<< "Insgesamt befinden sich " << l1.size() << " Zahlen in der Liste. \n";

    std::cout << "Die Liste enthält nicht: \n";
    for (int i = 0; i <= 100; ++i){
		  if(s1.find(i) == s1.end()){
			  std::cout << i << "\n";
		  }
	  }


}