#include <iostream>

#include "figure.h"
#include "triangle.h"
#include "righttriangle.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "quadrilateral.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "square.h"
#include "rhomb.h"

#include "bad_figure.h"


void print(Figure& f)
{
	f.print_info();
	std::cout << "создана" << std::endl;
}

int main()
{
	setlocale(LC_ALL, "russian");

	try
	{
		Figure f;
		print(f);

		Triangle t(60, 20, 100, 14, 10, 5);
		print(t);

		RightTriangle rt(30, 60, 3, 4, 5);
		print(rt);

		IsoscelesTriangle it(100, 40, 10, 21);
		print(it);

		EquilateralTriangle et(43);
		print(et);

		Quadrilateral q(10, 20, 30, 40, 4, 64, 34, 9);
		print(q);

		Parallelogram p(40, 50, 20, 30);
		print(p);

		Rectangle r(20, 30);
		print(r);

		Square s(30);
		print(s);

		Rhomb rh(30, 60, 15);
		print(rh);
	}
	catch (const bad_figure& e)
	{
		std::cout << "Ошибка! " << e.what() << std::endl;
	}
}


