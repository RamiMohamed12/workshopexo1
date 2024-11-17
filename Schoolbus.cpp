#include <string>
#include "Bus.h"
#include <iostream> 

using namespace std; 

class SchoolBus : public Bus {
private:

std::string school_name;
public:

SchoolBus(std::string sn) {
school_name = sn;
}
std::string getSchoolName() {
return school_name;
}
void setSchoolName(std::string sn) {
school_name = sn;
}
};
static int countbigbus(SchoolBus t[], int size ){

    int count = 0; // Initialize the counter

    for (int i = 0; i < size; ++i) {
        if (t[i].getseating() >= 40 && t[i].getMileage() < 200000) {
            ++count; 
        }
    }

    return count; 
}