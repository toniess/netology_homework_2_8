#pragma once
#include <iostream>

class Figure
{
public:
	Figure();

	int getCornerCount();

	virtual void printCorners();

	void print_info();

protected:
	Figure(int corners);
	
	std::string m_name = "Фигура";

private:
	int m_corner;
};