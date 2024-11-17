#include <iostream> 
#include "Vehicule.h"
#include "Bus.h"

using namespace std; 

Bus :: Bus () : seat_capacity (10) {}

int Bus :: getseating() {

return seat_capacity; 

}

void Bus :: set_seating (int new_seating){ 

  if (new_seating >= 10 && new_seating <= 50) {
        seat_capacity = new_seating; 
    } else if (new_seating > 0) {
        seat_capacity = 50; 
        cout << "Seating capacity out of range. Defaulting to 50." << endl;
    } else {
        throw std::invalid_argument("Seating doit être un entier positif >= 10.");
    }
}

void Bus :: get_info () {

cout << "Il s'agit d'un bus d'une capacite de " << seat_capacity << " avec une vitesse maximale " << getMaxSpeed() << " kmh" << " et son kilométrage est de" << getMileage() << " kmh";

}

