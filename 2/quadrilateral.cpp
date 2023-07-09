#include "quadrilateral.h"
#include "bad_figure.h"

Quadrilateral::Quadrilateral(int cornerA, int cornerB, int cornerC, int cornerD,
	int sideA, int sideB, int sideC, int sideD)
	: Figure(4)
{
	m_cornerA = cornerA;
	m_cornerB = cornerB;
	m_cornerC = cornerC;
	m_cornerD = cornerD;

	m_sideA = sideA;
	m_sideB = sideB;
	m_sideC = sideC;
	m_sideD = sideD;
	if (m_cornerA + m_cornerB + m_cornerC + m_cornerD != 360)
	{
		throw bad_figure("Сумма углов четырехугольника не равняется 360 градусов");
	}
	m_name = "Производный четырехугольник";
};

int Quadrilateral::getCornerA() { return m_cornerA; }
int Quadrilateral::getCornerB() { return m_cornerB; }
int Quadrilateral::getCornerC() { return m_cornerC; }
int Quadrilateral::getCornerD() { return m_cornerD; }

int Quadrilateral::getSideA() { return m_sideA; }
int Quadrilateral::getSideB() { return m_sideB; }
int Quadrilateral::getSideC() { return m_sideC; }
int Quadrilateral::getSideD() { return m_sideD; }

void Quadrilateral::printCorners() 
{
	std::cout << "(cтороны: " << getSideA() << " " << getSideB() << " " << getSideC() << " " << getSideD();
	std::cout << "; углы: " << getCornerA() << " " << getCornerB() << " " << getCornerC() << " " << getCornerD() << ") ";
}