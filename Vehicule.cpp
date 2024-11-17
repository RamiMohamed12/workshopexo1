#include <iostream> 
#include "Vehicule.h"

using namespace std; 

Vehicule :: Vehicule() :   max_speed (240),  mileage(0 ) {}

int Vehicule :: getMaxSpeed (){

return max_speed; 

}

int Vehicule :: getMileage (){

return mileage; 

}

void Vehicule :: setMaxSpeed (int speed){

if (speed > 0 ){
max_speed = speed; 
}   else {
        throw std::invalid_argument("la vitesse doit etre un entier positif.");
        }
}

void Vehicule::setMileage(int set_mileage) {
    if (set_mileage > 0) { // Fixed missing parenthesis
        mileage = set_mileage;
    } else {
        throw std::invalid_argument("Mileage doit être un entier positif.");
    }
}

Vehicule :: ~Vehicule(){
cout <<"Vehicule Destroyed"<< endl; 
}

