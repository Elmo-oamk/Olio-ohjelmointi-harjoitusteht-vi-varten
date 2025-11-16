#include "Car.h"
#include <iostream>

Car::Car(const std::string& b, const std::string& m, int y)
    : brand(b), model(m), yearModel(y) {}

void Car::printData() const {
    std::cout << brand << " " << model << " (" << yearModel << ")" << std::endl;
}
