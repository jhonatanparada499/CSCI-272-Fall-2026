#include "Car.h"
#include <iostream>

// default constructor
// using namespace notation
Car::Car(){
  color = "DNA";
  brand = "DNA";
  model = "DNA";
  year = 0;
}

void Car::showInfo(){
    std::cout << "Brand: " << brand << '\n';
    std::cout << "Color: " << color << '\n';
    std::cout << "Year: " << year << '\n';
    std::cout << "Model: " << model << '\n';
}

int main() {
  // defaul constructor
  // pointer to Car
  Car *pcar1 = new Car;
  pcar1->startEngine(); // -> = (*pointer).member

  Car myCar;
  myCar.startEngine();

  myCar.setInfo("Tesla", "Model X", 2026);
  myCar.showInfo();

  // calls copy constructor
  Car myCar2{myCar}; // or (myCar)
  std::cout << "Mycar2 after copy constructor: " << '\n';
  myCar2.showInfo();

  return 0;
}
