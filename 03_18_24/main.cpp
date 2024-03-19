#include <iostream>
#include <string>
#include <limits>
#include "drink.h"

std::string printDrink(const drink &);

int main()
{
    drink myDrink;
    myDrink.base = COFFEE;
    myDrink.temperature = ICE;
    myDrink.size = LARGE;
    myDrink.dairy = "Almond Milk";
    myDrink.flavor = "Brown Sugar";
    std::cout << printDrink(myDrink) << std::endl;

    return 0;
}

std::string printDrink(const drink &theDrink)
{
    std::string output;
    output += "Size: " + std::to_string(theDrink.size) + '\n';

    return output;
}
