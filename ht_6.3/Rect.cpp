#include "Rect.h"
#include "Parallelogram.h"
#include "Quadrangle.h"

Rect::Rect(int a, int b) : Parallelogram(a, b, 90, 90) { name = "Прямоугольник"; };