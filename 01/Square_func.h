#pragma once
#include <iostream>
#include <vector>

template<typename T>
T square(T& number1) {
	return number1 * number1;
}

template<typename V>
void square(std::vector<V>& vect) {
	for (V& elem : vect) {
		elem *= elem;
	}
 }

template<typename V>
void print_vector(std::vector<V>& vect) {
	for (size_t i = 0; i < vect.size(); i++) {
		if (i == (vect.size()-1)) {
			std::cout << vect[i];
		}
		else std::cout << vect[i] << ", ";
	};
}


