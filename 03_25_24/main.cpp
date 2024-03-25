#include <iostream>
#include "product.h"

int main()
{
    std::string prodNum = "1234a";
    std::string descript = "My product";
    product p(3.99, descript, prodNum);
    std::cout << p.tostring() << std::endl;
    return 0;
}