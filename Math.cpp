#include <iostream>

void math_func() {
	int one = 0, two = 0, input = 0;
	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "Введите второе число: ";
	std::cin >> two;
	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> input;
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
	else {
		std::cout << "вы ввели некоректный символ" << std::endl;
	}
}