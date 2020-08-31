// Point.h
// Author: SENG1120 Staff
// Date: 13-03-2019
// Description: Class representing a point in the Cartesian plane. 
// Written as an example for SENG1120 Lab 3 Question 5

#ifndef STAFF_POINT_H
#define STAFF_POINT_H

#include <iostream>

class Point {
	public:
		// Constructor
		// Precondition:
		// Postcondition: Point is created with x and y as specified, or 0 if not. 
		Point(const double new_x = 0, const double new_y = 0);
		
		// Precondition: 
		// Postcondition: x is set to the new_x value
		void set_x(const double new_x);

		// Precondition: 
		// Postcondition: y is set to the new_y value
		void set_y(const double new_y);

		// Precondition: x has a value
		// Postcondition: the value of x is returned
		double get_x() const;

		// Precondition: y has a value
		// Postcondition: the value of y is returned
		double get_y() const;
		
		// Precondition: Point p and this Point have x and y values
		// Postcondition: returns true if their x and y coordinates are equal, otherwise returns false
		bool operator ==(const Point& p) const;

		// Precondition: Point p and this Point have x and y values
		// Postcondition: returns false if their x and y coordinates are equal, otherwise returns true
		bool operator !=(const Point& p) const;

		// Precondition: this Point and p have x and y values
		// Postcondition: adds the x and y values of p to this Point's x and y values
		Point& operator +=(const Point& p);

	private:
		double x;
		double y;
};

// Precondition: Point p has x and y values
// Postcondition: returns ostream of Point p defined as (x,y).
std::ostream& operator <<(std::ostream& os, const Point& p);

// Precondition: x and y have values for both Points
// Postcondition: returns length between the points
double length(const Point& p1, const Point& p2);

#endif