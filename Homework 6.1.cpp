#include <iostream>
#include "Math.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Hello World!\n";
    math_func();
}
