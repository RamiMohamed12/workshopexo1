#ifndef VEHICULE_H 
#define VEHICULE_H 
#include <iostream>
using namespace std; 

class Vehicule {
private:
    int max_speed;
    int mileage;

public:
    Vehicule();

    int getMaxSpeed();
    void setMaxSpeed(int speed);

    int getMileage();
    void setMileage(int set_mileage);
    ~Vehicule(); 
};

#endif 