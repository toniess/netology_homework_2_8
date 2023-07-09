#include "triangle.h"
#include "bad_figure.h"

Triangle::Triangle(int cornerA, int cornerB, int cornerC,
	int sideA, int sideB, int sideC)
	: Figure(3)
{
	m_cornerA = cornerA;
	m_cornerB = cornerB;
	m_cornerC = cornerC;

	m_sideA = sideA;
	m_sideB = sideB;
	m_sideC = sideC;

	if (m_cornerA + m_cornerB + m_cornerC != 180)
	{
		throw bad_figure("Сумма углов треугольника не равна 180 градусов");
	}

	m_name = "Производный треугольник";
};

int Triangle::getCornerA() { return m_cornerA; }
int Triangle::getCornerB() { return m_cornerB; }
int Triangle::getCornerC() { return m_cornerC; }

int Triangle::getSideA() { return m_sideA; }
int Triangle::getSideB() { return m_sideB; }
int Triangle::getSideC() { return m_sideC; }

void Triangle::printCorners()
{
	std::cout << "(cтороны: " << getSideA() << " " << getSideB() << " " << getSideC();
	std::cout << "; углы: " << getCornerA() << " " << getCornerB() << " " << getCornerC() << ") ";
}
