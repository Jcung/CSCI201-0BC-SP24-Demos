#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>

class product
{
public:
    product(double price, std::string description, std::string prodNum);
    std::string getProductNum() const;
    std::string getDescription() const;
    double getPrice() const;
    void purchase();
    bool isPurchased() const;
    void setPrice(double);
    void setDescription(std::string);
    std::string tostring() const;

protected:
    double price;
    std::string description;
    std::string prodNum;
    bool purchased;
};

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
const int ENUM_NUM = 3;
const baseType bases[] = {COFFEE,
                          TEA,
                          CREAM};
const std::string baseStr[] = {"Coffee", "Tea", "Cream"};
const std::string strBase[] = {"COFFEE", "TEA", "CREAM"};
const sizeType sizes[] = {SMALL,
                          MED,
                          LARGE};
const std::string sizeStr[] = {"Small", "Medium", "Large"};
const tempType temps[] = {HOT,
                          ICE,
                          BLEND};
const std::string tempStr[] = {"Hot", "Iced", "Blended"};

class drink : public product
{
public:
    drink(baseType, tempType, sizeType, std::string dairy, std::string flavor);
    drink(baseType, tempType, sizeType, std::string dairy, std::string flavor, std::string description, std::string prodNum);
    // drink();
    std::string getBaseStr() const;
    std::string getTemperature() const;
    std::string getSize() const;
    std::string getDairy() const;
    std::string getFlavor() const;
    double getPrice() const;
    void setBase(baseType);
    void setTemperature(tempType);
    void setSize(sizeType);
    void setDairy(std::string);
    void setFlavor(std::string);
    std::string tostring() const;

private:
    baseType base;
    tempType temperature;
    sizeType size;
    std::string dairy;
    std::string flavor;
    static int numDrinks;
};

#endif