#include <iostream>

void math_func() {
	int one = 0, two = 0, input = 0;
	std::cout << "������� ������ �����: ";
	std::cin >> one;
	std::cout << "������� ������ �����: ";
	std::cin >> two;
	std::cout << "�������� ��������(1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
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
		std::cout << one << " � ������� " << two << " = " << three << std::endl;
	}
	else {
		std::cout << "�� ����� ����������� ������" << std::endl;
	}
}