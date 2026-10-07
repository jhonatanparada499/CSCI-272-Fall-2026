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
  // default constructor
  Car(){
    color = "DNA";
    brand = "DNA";
    model = "DNA";
    year = 0;
  }

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

  void showInfo(){
    std::cout << "Brand: " << brand << '\n';
    std::cout << "Color: " << color << '\n';
    std::cout << "Year: " << year << '\n';
    std::cout << "Model: " << model << '\n';
  }

};
