#include <iostream>

void math_func(int input, int one, int two) {
	if (input == 1) {
		std::cout << one << " + " << two << " = " << one + two << std::endl;
	}
	else if (input == 2) {
		std::cout << one << " - " << two << " = " << one - two << std::endl;
	}
	else if (input == 3) {
		std::cout << one << " * " << two << " = " << one * two << std::endl;
	}
	else if (input == 4) {
		std::cout << one << " / " << two << " = " << one / two << std::endl;
	}
	else if (input == 5) {
		int three = 1;
		for (int i = 0; i < two; i++) {
			three = three * one;
		}
		std::cout << one << " в степени " << two << " = " << three << std::endl;
	}
}