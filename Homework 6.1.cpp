#include <iostream>
#include "Math.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int one = 0, two = 0, input = 0;
	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "Введите второе число: ";
	std::cin >> two;
	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> input;
	if (input >= 1 && input <= 5) {
		math_func(input, one, two);
	}
	else {
		std::cout << "вы ввели некоректный символ" << std::endl;
	}
}
