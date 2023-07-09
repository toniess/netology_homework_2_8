#include "rhomb.h"
#include "bad_figure.h"

Rhomb::Rhomb(int cornerAC, int cornerBD, int side)
	: Parallelogram(cornerAC, cornerBD, side, side) {
	// исключений бросает только родительский конструктор
	m_name = "Ромб";
};