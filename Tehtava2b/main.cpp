#include <iostream>
#include <vector>
#include "Car.h"

int main() {

    std::vector<Car> carList;


    carList.emplace_back("Nissan", "Silvia", 1988);
    carList.emplace_back("Volvo", "V60", 2021);
    carList.emplace_back("Nissan", "Sunny4x4", 1989);


    std::cout << "Toinen auto listassa:" << std::endl;
    carList[1].printData();


    std::cout << "\nKaikki autot listassa:" << std::endl;
    for (const Car& car : carList) {
        car.printData();
    }

    return 0;
}
