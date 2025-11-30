#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car myCar("Volvo", "v60");
    myCar.setEngine();
    myCar.setWheels();
    myCar.printDetails();

    return 0;
}
