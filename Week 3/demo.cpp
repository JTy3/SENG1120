#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

double length(point point1, point point2)
{
    double length, 
    x1 = point1.get_x(), 
    x2 = point2.get_x(), 
    y1 = point1.get_y(),
    y2 = point2.get_y(),
    xLength = (x2-x1),
    yLength = (y2-y1);
    cout << x1 << endl;
    cout << x2 << endl;
    cout << y1 << endl;
    cout << y2 << endl;
    cout << xLength << endl;
    cout << yLength << endl;
    length = sqrt(pow(xLength, 2) - pow(yLength, 2));
    cout << length << endl;
	return length;
}

int main()
{
    point fPoint;
    cout << "Creating a point without updating points" << endl;
    cout << fPoint.get_x() << endl; //Printing points
    cout << fPoint.get_y() << endl;
    cout << "Creating a point and updating the points" << endl;
    point sPoint;
    sPoint.set_x(2.0);
    sPoint.set_y(4.0);
    cout << sPoint.get_x() << endl; //Printing points
    cout << sPoint.get_y() << endl;
    cout << "Length between the two points" << endl;
    cout << length(fPoint, sPoint) << endl;
	return 1;
}