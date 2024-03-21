#include <iostream>
#include <string>
#include <limits>
#include "drink.h"
#include "clock.h"
#include "drinkOrder.h"

// std::string printDrink(const drink &);

int main()
{
    drink myDrink(COFFEE, ICE, LARGE, "Almond Milk", "Brown Sugar");
    /* myDrink.base = COFFEE;
    myDrink.temperature = ICE;
    myDrink.size = LARGE;
    myDrink.dairy = "Almond Milk";
    myDrink.flavor = "Brown Sugar"; */
    std::cout << myDrink.tostring() << std::endl;
    drinkOrder theDrinks;
    theDrinks.addDrink(myDrink);
    drink drinks[4];
    for (int i = 0; i < 4; i++)
    {
        drinks[i].setBase(COFFEE);
    }
    theDrinks.addDrinks(drinks, 4);

    clockType myClock(10, 6, 22);
    std::cout << myClock.to_string() << std::endl;
    myClock.setTime(5, 5, 33);
    std::cout << myClock.to_string() << std::endl;
    for (int i = 0; i < 10; i++)
    {
        clockType newClock;
        newClock.setTime(i, 0, 0);
    }

    return 0;
}

/* std::string printDrink(const drink &theDrink)
{
    std::string output;
    output += "Size: " + std::to_string(theDrink.size) + '\n';

    return output;
} */
