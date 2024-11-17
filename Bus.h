#ifndef BUS_H
#define BUS_H 
#include "Vehicule.h"
#include<iostream> 


class Bus : public Vehicule 
{

private : 

    int seat_capacity; 
public : 
    Bus(); 
    int getseating (); 
    void set_seating ();

};


#endif 