#pragma once
#include "figure.h"


class Quadrilateral : public Figure
{
public:
	Quadrilateral(int cornerA, int cornerB, int cornerC, int cornerD,
		int sideA, int sideB, int sideC, int sideD);

	int getCornerA();
	int getCornerB();
	int getCornerC();
	int getCornerD();

	int getSideA();
	int getSideB();
	int getSideC();
	int getSideD();

	void printCorners() override;

protected:
	int m_cornerA;
	int m_cornerB;
	int m_cornerC;
	int m_cornerD;

	int m_sideA;
	int m_sideB;
	int m_sideC;
	int m_sideD;
};