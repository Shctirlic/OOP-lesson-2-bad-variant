#pragma once
#include <string>
#include "point.h"
#include "tiger.h"
#include <iostream>


class Transport {
	
public:
		Transport() {
			std::cout << "Transport constructor" << std::endl;

		}
		~Transport() {
			std::cout << "Transport destructor" << std::endl;
		}

		int speed() {
			return 100;

		}
		int model() {
			return 200;
		}
		
		}
	private:
		int right = 10;
		int speed = 5;
};

class  Car {
public:
	Car() {
		std::cout << "Car constructor" << std::endl;
	}
	~Car() {
		std::cout << "Car destructor" << std::endl;

		int color() {
			return green;
		}
	}
	int rule() {
		return right;
	}
};




