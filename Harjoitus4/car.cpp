#include "car.h"
#include <iostream>
using namespace std;

Car::Car() : model(""), brand(""){}
Car::Car(string mdl, string brd) : model(mdl), brand(brd) {}

void Car::setEngine(){
    objEngine.setHorsepower(328);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1 = Wheel(18, "talvirengas");
    objWheel2 = Wheel(18, "talvirengas");
    objWheel3 = Wheel(18, "talvirengas");
    objWheel4 = Wheel(18, "talvirengas");
}

string Car::getModel() const {return model; }
void Car::setModel(string mdl) { model = mdl; }

string Car::getBrand() const {return brand; }
void Car::setBrand(string brd) { brand = brd; }

void Car::printDetails() const {
    cout << "Auto : " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}
