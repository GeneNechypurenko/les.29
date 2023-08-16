#include <iostream>
#include <vector>
#include <algorithm>

#include "Car.h"

using namespace std;

int main()
{
    vector<Car> cars;

    cars.push_back(Car("Toyota", 2020, 25000));
    cars.push_back(Car("Honda", 2019, 20000));
    cars.push_back(Car("Ford", 2021, 10000));

    auto minCar = min_element(cars.begin(), cars.end(), [](Car& car1, Car& car2) 
        {
        return car1.getPrice() < car2.getPrice();
        });

    auto maxCar = max_element(cars.begin(), cars.end(), [](const Car& car1, const Car& car2)
        {
        return car1.getPrice() < car2.getPrice();
        });

    cout << "MIN: " << minCar->getName() << endl
        << "year: " << minCar->getYear() << endl
        << "price: " << minCar->getPrice() << endl;

    cout << "---------------------------------------" << endl;

    cout << "MAX: " << maxCar->getName() << endl
        << "year: " << maxCar->getYear() << endl 
        << "price: " << maxCar->getPrice() << endl;
}