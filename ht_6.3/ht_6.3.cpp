#include <Windows.h>
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Parallelogram.h"
#include "Rect.h"
#include "Rhombus.h"
#include "Square.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    RightTriangle rt = RightTriangle(1, 1, 1, 2, 2);
    Figure* fig = &rt;
    rt.print_info(fig);
    std::cout << std::endl;

    IsoscelesTriangle it = IsoscelesTriangle(10, 20, 100, 100);
    fig = &it;
    rt.print_info(fig);
    std::cout << std::endl;

    EquilateralTriangle et = EquilateralTriangle(200);
    fig = &et;
    et.print_info(fig);
    std::cout << std::endl;

    Parallelogram p = Parallelogram(10, 20, 30, 60);
    fig = &p;
    p.print_info(fig);
    std::cout << std::endl;

    Rect rect = Rect(10, 20);
    fig = &rect;
    rect.print_info(fig);
    std::cout << std::endl;

    Rhombus rhomb = Rhombus(10, 45, 45);
    fig = &rhomb;
    rhomb.print_info(fig);
    std::cout << std::endl;

    Square square = Square(30);
    fig = &square;
    square.print_info(fig);
}