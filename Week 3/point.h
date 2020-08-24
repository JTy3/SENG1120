// Author: Jacob Tye
// Date: 24 Aug 2020
// Lab 3 SENG1120 - Define a class called point and do stuff

class point
{
public:
    point(const double x = 0.0, const double y = 0.0);

    void set_x(const double x); //  function that sets a x value

    void set_y(const double y); //  function that sets a y value

    double get_x() const; //  function that gets the x value

    double get_y() const; //  function that gets the y value

    double length() const;  //  function that returns the length between two points

private:
    double x_value;
    double y_value;
};