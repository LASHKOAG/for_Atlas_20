#include "rectangle.h"

Rectangle::Rectangle()
{
    std::cout << "Error: no arguments";
}

Rectangle::Rectangle(double l):m_length{l}
{
}

Rectangle::Rectangle(double l, double w):m_length{l}, m_width{w}
{
}

void Rectangle::print()
{
    std::cout << "length: " << m_length << " width: " << m_width << std::endl;
}
