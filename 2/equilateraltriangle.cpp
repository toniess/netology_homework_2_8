#include "equilateraltriangle.h"

EquilateralTriangle::EquilateralTriangle(int side)
	: IsoscelesTriangle(60, 60, side, side) {
	// здесь не может быть исключений
	m_name = "Равносторонний треугольник";
};