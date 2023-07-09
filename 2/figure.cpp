#include "figure.h"

Figure::Figure() : m_corner(0) {};
Figure::Figure(int corners) : m_corner(corners) {}


int Figure::getCornerCount()
{
	return m_corner;
}

void Figure::printCorners()
{
	return;
}

void Figure::print_info()
{
	std::cout << m_name << " ";
	if (m_corner > 0)
	{
		printCorners();
	}
}

