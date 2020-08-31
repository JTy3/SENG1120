// Point.cpp
// Author: SENG1120 Staff
// Date: 13-03-2019
// Description: Class representing a point in the Cartesian plane. 
// Written as an example for SENG1120 Lab 3 Question 5

#include "Point.h"
#include <iostream>
#include <cmath>

// Constructor
Point::Point(const double new_x, const double new_y) {
	x = new_x;
	y = new_y;
}
	
// Mutator methods
void Point::set_x(const double new_x) {x = new_x;}
void Point::set_y(const double new_y) {y = new_y;}

// Accessor methods
double Point::get_x() const {return x;}
double Point::get_y() const {return y;}

// Overloads the == operator
bool Point::operator ==(const Point& p) const {
	if ((p.get_x() == x) && (p.get_y() == y)) {
		return true;
	}
	return false;
}

// Overloads the != operator
bool Point::operator !=(const Point& p) const {
	if (*this == p) {
		return false;
	}
	return true;
}

// Overloads += operator
Point& Point::operator +=(const Point& p) {
	x += p.get_x();
	y += p.get_y();
	return *this;
}

// Overloads the operator '<<' to print (x,y)
std::ostream& operator <<(std::ostream& os, const Point& p) {
	os << "(" << p.get_x() << "," << p.get_y() << ")";
	return os;
}

// Returns distance between two Point objects
double length(const Point& p1, const Point& p2) {
	return sqrt( pow((p1.get_x() - p2.get_x()), 2.0) + pow((p1.get_y() - p2.get_y()), 2.0) );
}