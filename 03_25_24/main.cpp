#include <iostream>
#include "product.h"

int main()
{
    std::string prodNum = "1234a";
    std::string descript = "My product";
    product p(3.99, descript, prodNum);
    std::cout << p.tostring() << std::endl;
    drink d(COFFEE, HOT, LARGE, "Skim Milk", "Brown Sugar");
    std::cout << d.tostring() << std::endl;
    drink myDrink(TEA, ICE, SMALL, "none", "none", "Small Iced Tea", "tea1234");
    std::cout << myDrink.tostring() << std::endl;
    std::cout << myDrink.getDescription() << std::endl;

    return 0;
}