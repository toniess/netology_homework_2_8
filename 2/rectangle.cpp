#include "rectangle.h"

Rectangle::Rectangle(int sideAC, int sideBD)
	: Parallelogram(90, 90, sideAC, sideBD) {
	// исключений бросает только родительский конструктор
	m_name = "Прямоугольник";
};