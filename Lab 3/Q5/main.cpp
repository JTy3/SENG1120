// main.cpp
// Author: SENG1120 Staff
// Date: 13-03-2019
// Description: Demonstrates behaviour of Point3D class
// Written as an example for SENG1120 Lab 3 Question 5

#include <iostream>
#include "Point3D.h"

int main() {
	// p is a pointer to a Point object that has been created on the heap
	Point3D * p1 = new Point3D(1,2,3);
	Point3D * p2 = new Point3D(1,2,3);
	Point3D * p3 = new Point3D(3,2,1);

	// Print out the Points (note: must use * to dereference the pointer)
	std::cout << "The coordinates of p1: " << *p1 << std::endl;
	std::cout << "The coordinates of p2: " << *p2 << std::endl;
	std::cout << "The coordinates of p3: " << *p3 << std::endl;

	// Use the length function to print out the length between p1 and p2
	std::cout << "\nThe length between p1 and p2: " << length(*p1,*p2) << "\n" << std::endl;

	// Demonstrate use of == operator overloading
	if (*p1 == *p2) {
		std::cout << "p1 and p2 are equal!" << std::endl;
	}
	else {
		std::cout << "p1 and p2 are not equal." << std::endl;
	}

	// Demonstrate use of != operator overloading
	if (*p2 != *p3) {
		std::cout << "p2 and p3 are not equal." << std::endl;
	}
	else {
		std::cout << "p2 and p3 are equal!" << std::endl;
	}

	// Demonstrate use of += operator overloading
	std::cout << "\nAdding p2 to p1...\n" << std::endl;
	*p1 += *p2;

	// Print out the Points (note: must use * to dereference the pointer)
	std::cout << "The coordinates of p1: " << *p1 << std::endl;
	std::cout << "The coordinates of p2: " << *p2 << std::endl;
	std::cout << "The coordinates of p3: " << *p3 << std::endl;


	// Since the Point objects were created on the heap, we must
	// delete them to prevent memory leaks
	delete p1;
	delete p2;
	delete p3;

	return 0;
}