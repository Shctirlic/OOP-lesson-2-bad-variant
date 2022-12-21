#pragma once
#include <string>
#include "point.h"
#include "tiger.h"
class point
{

public:
	explicit point(int x, int y, std::string str) :_x(x), _y(y), _str(str) {}

	int getX() {
		return  this->_x;

		void setX(int x) {

			this->_x = x;

		}

		point& void move(int x, int y) {

			_x = +x;
			_y = +y;
			return *this;
		}




private:

	
	int _x;
	int _y;
	std::string _str;


	};

};
