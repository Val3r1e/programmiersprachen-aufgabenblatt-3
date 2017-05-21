# include <cstdlib> // std :: rand ()
# include <vector> // std :: vector <>
# include <list> // std :: list <>
# include <iostream> // std :: cout
# include <iterator> // std :: ostream_iterator <>
# include <algorithm> // std :: reverse , std :: generate

int main ()
{
	std::vector <int> v0(10);											//vector v0 mit 10 Elementen
	for (auto& v : v0) {												//for-Schleife füllt v0 mit random Nummern
		v = std::rand();
	}
	std::copy(std::begin(v0), std::end(v0), 							//Kopiert von begin(v0) bis end(v0) in ostream_iterator --> gibt v0 aus 
		std::ostream_iterator <int>(std::cout, "\n"));

	std::list <int> l0(v0.size());										//Neue list l0 mit größe von v0 (10)
	std::copy(std::begin(v0), std::end(v0), std::begin(l0));			//Kopiert von begin(v0) bis end(v0) alle elemente in l0, von begin(l0) an 

	std::list <int> l1(std::begin(l0), std::end(l0));					//Erstellt l1 aus l0
	std::reverse(std::begin(l1), std::end(l1));							//dreht l1 um
	std::copy(std::begin(l1), std::end(l1), 							//Gibt l1 aus
		std::ostream_iterator <int>(std::cout, "\n"));

	l1.sort ();															//Sortiert l1 nach größe
	std::copy(l1.begin(), l1.end(), 									//Gibt l1 aus
		std::ostream_iterator <int>(std::cout, "\n"));

	std::generate(std::begin(v0), std::end(v0), std::rand);				//Füllt v0 mit neuen Zufallszahlen
	std::copy(v0.rbegin(), v0.rend(), 									//Gibt v0 aus
		std::ostream_iterator <int>(std::cout, "\n"));

	return 0;
}