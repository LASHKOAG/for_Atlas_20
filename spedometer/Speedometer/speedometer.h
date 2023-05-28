#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H
#include <iostream>

class Speedometer
{
public:
    Speedometer(int max_speed);

    void set_max_speed(int user_speed);
    //get

    //set isKM
    //get Is KM
    void print();


private:
    const int m_min_speed{0};
    int m_max_speed;
    bool isKM{true};
};

#endif // SPEEDOMETER_H
