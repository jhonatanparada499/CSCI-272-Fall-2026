#include "Car.h"

// #include <iostream>
// #include <string>
// #include <cctype>

using namespace std;

int main(){
  // defaul constructor
  // pointer to Car
  Car* pcar1 = new Car;
  pcar1->startEngine(); // -> = (*pointer).member

  // array of cars
  Car mycars[20];

  Car myCar;
  myCar.brand = "BWM";
  myCar.model = "XS";
  myCar.color = "Red";
  myCar.year = 2024;

  myCar.startEngine();
  
  return 0;
}
