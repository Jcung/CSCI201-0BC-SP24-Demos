#ifndef DRINK_H
#define DRINK_H
#include <string>

enum baseType
{
    COFFEE,
    TEA,
    CREAM
};
enum sizeType
{
    SMALL,
    MED,
    LARGE
};
enum tempType
{
    HOT,
    ICE,
    BLEND
};

class drink
{
public:
    baseType base;
    tempType temperature;
    sizeType size;
    std::string dairy;
    std::string flavor;
};

#endif
