#include "Figure.h"
#include "Quadrangle.h"
#include <string>
#include <iostream>

Quadrangle::Quadrangle() {
	name = "Четырехугольник";
	points = 4;
}

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle() {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}

void Quadrangle::print_info_() {
    std::cout << name << ":\n";
    std::cout << "Стороны: " << a << " " << b << " " << c << " " << d << "\n";
    std::cout << "Углы: " << A << " " << B << " " << C << " " << D << "\n";
}