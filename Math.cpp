#include <iostream>

void func1(int one, int two) {
	std::cout << one << " + " << two << " = " << one + two << std::endl;
}

void func2(int one, int two) {
	std::cout << one << " - " << two << " = " << one - two << std::endl;
}

void func3(int one, int two) {
	std::cout << one << " * " << two << " = " << one * two << std::endl;
}

void func4(int one, int two) {
	std::cout << one << " / " << two << " = " << one / two << std::endl;
}

void func5(int one, int two) {
	int three = 1;
	for (int i = 0; i < two; i++) {
		three = three * one;
	}
	std::cout << one << " в степени " << two << " = " << three << std::endl;
}