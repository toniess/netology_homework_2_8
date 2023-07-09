#include "isoscelestriangle.h"
#include "bad_figure.h"

IsoscelesTriangle::IsoscelesTriangle(int cornerA, int cornerBC,
	int sideA, int sideBC)
	: Triangle(cornerA, cornerBC, cornerBC,
		sideA, sideBC, sideBC) 
{
	// здесь конструктор родител€ кинет исключение
	// углы при основании и бокорые стороны всегда равны
	m_name = "–авнобедренный треугольник";
};