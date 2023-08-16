#pragma once

#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string name;
    int year;
    int price;

public:
    Car(string name, int year, int price);

    string getName() const;
    int getYear() const;
    int getPrice() const;
};

