/**
 * DynamicArray.h
 */

#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray {
private:
  int *arr;

public:
  DynamicArray(int n);
  ~DynamicArray();

  // rule of 3
  DynamicArray(const DynamicArray &theOther);            // copy
  DynamicArray &operator=(const DynamicArray &theOther); // copy-assign
  DynamicArray(DynamicArray &&theOther);                 // moving

  void myFunc();
  void displayVal();
};

#endif // DYNAMICARRAY_H
