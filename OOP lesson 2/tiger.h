#pragma once
#include <string>
#include "point.h"
#include "tiger.h"
#include <iostream>



class Animal {
public:
	Animal() {
		std::cout << "Animal cotstuctor" << std::endl;

	}
	~Animal() {
		std::cout << "Animal destructor" << std::endl;
	}

	int fight() {
		return 10;

	}

	int run() {
		return speed;
	}
	void eat() {
		std:: cout << "Animal have eaten" << std::endl;
	}
private:
	int strenght = 10;
	int speed = 5;

	class tiger : public Animal {

	};




};
class tiger
{
public:
	tiger(int height, const std::string& color) : _height(height), _color(color) {}
	int getHeight() const {
		_height = height;
		_color = color;
		return _height;


	}
	~tiger() {
		std:: cout << "tiger destructor";
	}

	void setHeight(int height) {
		_height = height;


	}
	int getHeight() const {
		return _height;
	}

	const std::string& getColor() {
		return _color;
	}

	friend std::ostream& operator<<(std::ostream& os, tiger& t ) {
		os << t.getHeight() << " " << t.getColor();
		return os;
	}

private:
	int _height;
	std::string color;



};

