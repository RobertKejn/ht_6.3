#include <iostream>
#include "Figure.h"
#include "Triangle.h"

Triangle::Triangle() {
	name = "Треугольник";
	points = 3;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Triangle() {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}

void Triangle::print_info_()  {
	std::cout << name << ":\n";
	std::cout << "Стороны: " << a << ' ' << b << ' ' << c << '\n';
	std::cout << "Углы: " << A << ' ' << B << ' ' << C << '\n';
}

