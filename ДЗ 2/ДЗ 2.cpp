

#include <iostream>

int main()
{
	double S, T, chas, num1, rasstoyanie, min, sek, rasxod, benz1, benz2, benz3;
	std::cout << " task 1";
	std::cout << " vvedite rasstoyanie poleta v km";
	std::cin >> S;
	std::cout << " vvedite vremya poleta v chasah";
	std::cin >> T;
	std::cout << " skorost samoleta v km/chas" << S / T;
	






	num1 = 2;
	std::cout << " Task 2";
	std::cout << " vvedite kolichestvo chasov polzovania skuterom";
	std::cin >> chas;
	std::cout << " vvedite kolichestvo minut polzovania skuterom";
	std::cin >> min;
	std::cout << " vvedite kolichestvo sekund polzovania skuterom";
	std::cin >> sek;
	std::cout << " stoimost poezdki v grivnah" << (chas * 60 + min + sek / 60) * 2;






	

	std::cout << " Task 3";
	std::cout << " vvedite rasstoyanie poezdki v km";
	std::cin >> rasstoyanie;
	std::cout << " vvedite rasxod benzina na 100km";
	std::cin >> rasxod;
	std::cout << " vvedite stoimost 1-ogo vida benzina";
	std::cin >> benz1;
	std::cout << " vvedite stoimost 2-ogo vida benzina";
	std::cin >> benz2; 
	std::cout << " vvedite stoimost 3-ego vida benzina";
	std::cin >> benz3; 
	std::cout << " stoimost poezdki na 1-om vide benzina" << (rasstoyanie * rasxod) / benz1; 
	std::cout << " stoimost poezdki na 2-om vide benzina" << (rasstoyanie * rasxod) / benz2; 
	std::cout << " stoimost poezdki na 3-em vide benzina" << (rasstoyanie * rasxod) / benz3; 


	
}

