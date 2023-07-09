#pragma once
#include "figure.h"

class Triangle : public Figure
{
public:
	Triangle(int, int, int, int, int, int);

	int getCornerA();
	int getCornerB();
	int getCornerC();

	int getSideA();
	int getSideB();
	int getSideC();

	void printCorners() override;

protected:
	int m_cornerA;
	int m_cornerB;
	int m_cornerC;

	int m_sideA;
	int m_sideB;
	int m_sideC;
};
