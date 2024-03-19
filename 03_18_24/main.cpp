#include <iostream>
#include <string>
#include <limits>
#include "drink.h"
#include "clock.h"

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

    clockType myClock;
    myClock.setTime(5, 5, 33);
    std::cout << myClock.to_string() << std::endl;

    return 0;
}

std::string printDrink(const drink &theDrink)
{
    std::string output;
    output += "Size: " + std::to_string(theDrink.size) + '\n';

    return output;
}
