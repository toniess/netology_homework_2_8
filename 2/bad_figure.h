#pragma once
#include "iostream"

class bad_figure : public std::domain_error
{
public:
	bad_figure(const char* a);
};	