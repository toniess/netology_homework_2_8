#include "isoscelestriangle.h"
#include "bad_figure.h"

IsoscelesTriangle::IsoscelesTriangle(int cornerA, int cornerBC,
	int sideA, int sideBC)
	: Triangle(cornerA, cornerBC, cornerBC,
		sideA, sideBC, sideBC) 
{
	// ����� ����������� �������� ����� ����������
	// ���� ��� ��������� � ������� ������� ������ �����
	m_name = "�������������� �����������";
};