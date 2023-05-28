#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

class Rectangle
{
public:
    Rectangle();
    Rectangle(double l);
    Rectangle(double l, double w);

    void print();


private:
    double m_length;
    double m_width{1.0};
};

#endif // RECTANGLE_H
