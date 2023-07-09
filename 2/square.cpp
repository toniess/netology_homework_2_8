#include "square.h"

Square::Square(int side)
	: Rectangle(side, side) {
	// исключений бросает только родительский конструктор
	m_name = " вадрат";
};