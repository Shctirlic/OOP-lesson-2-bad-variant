#include <iostream>
#include <string>
#include "point.h"
#include "tiger.h"







main() {

	/*char str[] = "abc";
	point my_point(5, 10);

	std::cout << my_point.getX() << "\n";

	my_point.move(3, 9).move(2, 10).move(2, 11);

	std::cout << my_point.getX() << "\n";*/

	tiger t(3, "yellow");

	std::cout << t.fight() << std::endl;


	//std::cout << t << std::endl;


	return 0;
}