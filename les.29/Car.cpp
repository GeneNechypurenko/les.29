#include "Car.h"

Car::Car(string name, int year, int price)
    :
    name(name),
    year(year), 
    price(price)
{}

string Car::getName() const
{
    return name;
}

int Car::getYear() const
{
    return year;
}

int Car::getPrice() const
{
    return price;
}
