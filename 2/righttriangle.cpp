#include "righttriangle.h"
#include "bad_figure.h"

RightTriangle::RightTriangle(int cornerA, int cornerB,
	int sideA, int sideB, int sideC)
	: Triangle(cornerA, cornerB, 90,
		sideA, sideB, sideC) {

	if (m_cornerC != 90)
	{
		throw bad_figure("���� C �� ����� 90 ��������");
	}
	m_name = "������������� �����������";
};