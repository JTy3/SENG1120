// Point3D.h
// Author: SENG1120 Staff
// Date: 13-03-2019
// Description: Class representing a three dimensional point in the Cartesian plane. 
// Written as an example for SENG1120 Lab 3 Question 5

#ifndef STAFF_POINT3D_H
#define STAFF_POINT3D_H

#include <iostream>
#include "Point.h"

class Point3D : public Point {
	public:
		// Precondition: 
		// Postcondition: x, y, z values are set to given new_x, new_y, new_z values or 0
		Point3D(const double new_x = 0, const double new_y = 0, const double new_z = 0);

		// Precondition:
		// Postcondition: z is set to new_z
		void set_z(double new_z);

		// Precondition: z has a value
		// Postcondition: value of z is returned
		double get_z() const;
	
		// Precondition: this Point and p have x, y and z values
		// Postcondition: returns true if their x, y and z coordinates are equal, otherwise returns false
		bool operator ==(const Point3D& p) const;

		// Precondition: this Point and p have x, y and z values
		// Postcondition: returns false if their x, y and z coordinates are equal, otherwise returns true
		bool operator !=(const Point3D& p) const;

		// Precondition: this Point and p have x, y and z values
		// Postcondition: adds the x, y and z values of p to this Point's x, y and z values
		Point& operator +=(const Point3D& p);

	private:
		double z;
};

// Precondition: Point p has x, y and z values
// Postcondition: returns ostream of Point p defined as (x,y,z).
std::ostream& operator <<(std::ostream& os, const Point3D& p);

// Precondition: x, y and z have values for both Points
// Postcondition: returns length between the points
double length(const Point3D& p1, const Point3D& p2);


#endif