#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

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

private:
    double price;
    std::string description;
    std::string prodNum;
    bool purchased;
};

#endif