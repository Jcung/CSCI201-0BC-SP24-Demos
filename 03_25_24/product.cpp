#include "product.h"

product::product(double price, std::string description, std::string prodNum)
{
    setPrice(price);
    setDescription(description);
    if (!prodNum.empty())
    {
        this->prodNum = prodNum;
    }
    else
    {
        std::cout << "Product number cannot be empty" << std::endl;
        this->prodNum = "1";
    }
    purchased = false;
}

std::string product::getProductNum() const
{
    return prodNum;
}

std::string product::getDescription() const
{
    return description;
}

double product::getPrice() const
{
    return price;
}

void product::purchase()
{
    purchased = true;
}

bool product::isPurchased() const
{
    return purchased;
}

void product::setPrice(double price)
{
    if (price > 0)
    {
        this->price = price;
    }
    else
    {
        std::cout << "Price must be greater than 0." << std::endl;
        this->price = 1;
    }
}

void product::setDescription(std::string description)
{
    this->description = description;
}

std::string product::tostring() const
{
    std::ostringstream out;
    out << std::setprecision(2) << std::fixed << std::showpoint;
    /*
        std::string purch;
        if(purchased)
        {
            purch = "Not Available";
        }
        else
        {
            purch = "Available";
        }
    */
    std::string purch = purchased ? "Not Available" : "Available";
    out << prodNum << " - " << description << " - $" << price << " - " << purch;
    return out.str();
}
