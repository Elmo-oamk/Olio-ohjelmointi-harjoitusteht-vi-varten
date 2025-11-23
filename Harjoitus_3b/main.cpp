#include <iostream>
#include "Animal.h"
#include "Dog.h"


int main() {
    Animal a;
    a.callOut();

    std::cout << std::endl;

    Dog d;
    d.callOut();

    return 0;
}
