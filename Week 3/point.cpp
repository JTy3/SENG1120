// This implements a class that represents an
// account object for double numbers of a currency.
// Programmer: Alex Mendes
// Last modified:  14 Dec 2017
// This file should be used in conjunction with Lab 1 for SENG1120

#include "point.h"

point::point(double x, double y)
{
    x_value = 0;
    y_value = 0;
}

void point::set_x(double x)
{
    x_value = x;
}

void point::set_y(double y)
{
    y_value = y;
}

double point::get_x() const
{
    return x_value;
}

double point::get_y() const
{
	return y_value;
}