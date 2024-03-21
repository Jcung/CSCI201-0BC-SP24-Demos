#ifndef DRINKORDER_H
#define DRINKORDER_H
#include "drink.h"

class drinkOrder
{

public:
    drinkOrder();
    void addDrink(drink &);
    void addDrinks(drink[], int);

private:
    drink drinks[10];
    int numDrinks;
};

#endif