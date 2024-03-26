#include <iostream>
#include "product.h"

// lecture activity fill-in getters and setters for ice cream
// add an ice cream variable to the main with a call to it's tostring.

int main()
{
    std::string prodNum = "1234a";
    std::string descript = "My product";
    product p(prodNum, 3.99, descript);
    product r(prodNum + "b");
    product s(prodNum + "s", 8.99, "This product", 12, 20, 3);
    std::cout << p.tostring() << std::endl;
    drink d(COFFEE, HOT, LARGE, "Skim Milk", "Brown Sugar");
    std::cout << d.tostring() << std::endl;
    drink myDrink(TEA, ICE, SMALL, "none", "none", "Small Iced Tea", "tea1234");
    std::cout << myDrink.tostring() << std::endl;
    std::cout << myDrink.getDescription() << std::endl;

    return 0;
}