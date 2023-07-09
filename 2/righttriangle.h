#pragma once
#include "triangle.h"

class RightTriangle : public Triangle
{
public:
	RightTriangle(int cornerA, int cornerB,
		int sideA, int sideB, int sideC);
};