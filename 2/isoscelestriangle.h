#pragma once
#include "triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int cornerA, int cornerBC,
		int sideA, int sideBC);
};