#include "speedometer.h"

Speedometer::Speedometer(int max_speed):m_max_speed{max_speed}
{

}

void Speedometer::set_max_speed(int user_speed)
{
    m_max_speed = user_speed;
}

void Speedometer::print()
{
    std::cout << "max_speed: " << m_max_speed << std::endl;
    std::cout << "isKM?: " << isKM << std::endl;

}
