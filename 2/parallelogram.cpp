#include "parallelogram.h"
#include "bad_figure.h"

Parallelogram::Parallelogram(int cornerAC, int cornerBD, int sideAC, int sideBD)
	: Quadrilateral(cornerAC, cornerBD, cornerAC, cornerBD, sideAC, sideBD, sideAC, sideBD)
{
	if (m_sideA == m_sideC || m_sideB == m_sideD)
	{
		throw bad_figure("Противоположные стороны не равны");
	}
	if (m_cornerA == m_cornerC || m_cornerB == m_cornerD)
	{
		throw bad_figure("Противолежащие углы не равны");
	}
	m_name = "Параллелограм";
};