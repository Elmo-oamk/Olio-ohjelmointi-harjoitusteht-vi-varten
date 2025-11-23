#include <iostream>
#include "ItalianChef.h"
#include "chef.h"

int main() {
    //Chef gordon("Gordon Ramsay");
    //gordon.makeSalad();
    //gordon.makeSoup();

    //std::cout << std::endl;


    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makePasta();
    std::cout << "name of the Italian Chef is " << anthony.getName() << std::endl;

    return 0;
}
