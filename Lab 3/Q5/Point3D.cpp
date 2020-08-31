// Point3D.cpp
// Author: SENG1120 Staff
// Date: 13-03-2019
// Description: Class representing a three dimensional point in the Cartesian plane. 
// Written as an example for SENG1120 Lab 3 Question 5

#include "Point3D.h"
#include <iostream>
#include <cmath>

// Constructor
Point3D::Point3D(const double new_x, const double new_y, const double new_z) : Point(new_x,new_y) {
	z = new_z;
}

// Mutator method
void Point3D::set_z(double new_z) {z = new_z;}

// Accessor method
double Point3D::get_z() const {return z;}

// Overload == operator
bool Point3D::operator ==(const Point3D& p) const {
	if (((get_x() == p.get_x()) && (get_y() == p.get_y())) && (get_z() == p.get_z())) {
		return true;
	}
	return false;
}

// Overload != operator
bool Point3D::operator !=(const Point3D& p) const {
	if (*this == p) {
		return false;
	}
	return true;
}

// Overloads += operator
Point& Point3D::operator +=(const Point3D& p) {
	set_x(get_x() + p.get_x());
	set_y(get_y() + p.get_y());
	set_z(get_z() + p.get_z());
	return *this;
}

// Overloads the operator '<<' to print (x,y,z)
std::ostream& operator <<(std::ostream& os, const Point3D& p) {
	os << "(" << p.get_x() << "," << p.get_y() << "," << p.get_z() << ")";
	return os;
}

// Returns distance between two Point objects
double length(const Point3D& p1, const Point3D& p2) {
	return sqrt( pow((p1.get_x() - p2.get_x()), 2.0) + pow((p1.get_y() - p2.get_y()), 2.0) + pow((p1.get_z() - p2.get_z()), 2.0));
}
