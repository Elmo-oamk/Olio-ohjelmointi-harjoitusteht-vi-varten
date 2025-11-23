#include "animal.h"
#include <iostream>

Animal::Animal() {
    std::cout << "Animal constructor" << std::endl;

}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

void Animal::callOut(){
    std::cout << "Elain aantelee" << std::endl;
}
