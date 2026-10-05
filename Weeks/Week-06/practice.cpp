#include <iostream>
// #include <string>
// #include <cctype>

using namespace std;

class Car{
public:
  // data members
  string color;
  string brand;
  string model;
  int year;

  // default constructor
  Car(){
    color = "DNA";
    brand = "DNA";
    model = "DNA";
    year = 0;
  }

   // func member

  void startEngine(){
    cout << "Engine started" << '\n';
  }

  void stopEngine(){
    cout << "Engine stopped" << '\n';
  }

  void showInfo(){
    cout << "Brand: " << brand << '\n';
    cout << "Color: " << color << '\n';
    cout << "Year: " << year << '\n';
    cout << "Model: " << model << '\n';
  }

};

int main(){
  Car myCar;
  myCar.brand = "BWM";
  myCar.model = "XS";
  myCar.color = "Red";
  myCar.year = 2024;
  
  return 0;
}
