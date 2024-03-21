#include "drinkOrder.h"

drinkOrder::drinkOrder()
{
    numDrinks = 0;
}

void drinkOrder::addDrink(drink &d)
{
    if (numDrinks < 10)
    {
        drinks[numDrinks] = d;
        numDrinks++;
    }
}

void drinkOrder::addDrinks(drink d[], int numD)
{
    for (int i = 0; i < numD; i++)
    {
        drinks[i] = d[i];
    }
    numDrinks = numD;
}
