#include <list>
#include <vector>
#include <set>
# include <cstdlib>
# include <iostream> // std :: cout
# include <iterator> // std :: ostream_iterator <>
# include <algorithm> // std :: reverse , std :: generate
#include <map>


int main (){
    std::list <unsigned int> l1 (100);           //int kann nicht neg. werden
    for (auto& l : l1) {
		  l = std::rand() % 101;                       //Fügt von 0-100 random zahlen ein
	  }

    /*std::copy(std::begin(l1), std::end(l1), 
		std::ostream_iterator <int>(std::cout, "\n"));*/

    std::vector<unsigned int > v1 (l1.size());                //Kopieren list in vector
    std::copy(std::begin(l1), std::end(l1), std::begin(v1));

    std::set <unsigned int> s1;

    for(auto& s : l1){                            //Jede Zahl kommt nur einmal vor 
      s1.insert(s);
    }

    std::cout<< "Es befinden sich " << s1.size() << " verschiedene Zahlen in der Liste. \n";
    std::cout<< "Insgesamt befinden sich " << l1.size() << " Zahlen in der Liste. \n";

    std::set <unsigned int> s2;

    for(int i = 0; i <= 100; ++i ){       //Elemente die die list nicht enthält
      auto j = s1.find(i);
      if(j == s1.end()){            //Wenn Element nicht vorhanden verweis auf end()
        s2.insert(i);
      }
    }
    std::cout << "Die Liste enthält nicht: \n";

    std::copy(std::begin(s2), std::end(s2), 
		std::ostream_iterator <int>(std::cout, "\n"));


    std::map <int,int> m1;          // <Zahl,Häufigkeit>
    int j = 1;

    for (auto i = v1.begin(); i != v1.end(); ++i){      // map füllen mit Zahl(Key) und value um 1 erhöhen 
      m1.insert(std::make_pair(*i , 0));
      ++m1[*i];
    }

    std::cout << "Zahlen und ihre Häufigkeit: \n";

    for(auto it = m1.begin(); it != m1.end(); ++it){      //map printen
      std::cout << it->first << ":" << it ->second << "\n";
    }


}