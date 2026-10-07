// declaring and def guard headers
// to prevent double inclusion of this file
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car{
private:
  // data members
  std::string color{"Unknown"}; // direct list initialization
  std::string brand;
  std::string model;
  int year;

public:
  // declaring to def later in practice.cpp
  // error if skipped
  Car(); 

  // copy constructor
  Car(const Car& otherCar){
    color = otherCar.color;
    brand = otherCar.brand;
    model = otherCar.model;
    year = otherCar.year;
  }

  // destructor (no params)
  ~Car(){
    std::cout << "Object destroyed" << std::endl;
  }

   // func member

  void startEngine(){
    std::cout << "Engine started" << '\n';
  }

  void stopEngine(){
    std::cout << "Engine stopped" << '\n';
  }

  void setInfo(std::string theBrand,
               std::string theColor,
               int theYear
               ){
    color = theColor;
    brand = theBrand;
    year = theYear;
  }

  void showInfo();

};

#endif
