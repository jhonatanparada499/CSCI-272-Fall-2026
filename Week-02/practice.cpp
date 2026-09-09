#include <iostream>
#include <string>
using namespace std;

int global = 8;

void great(string name = "Students"){
  cout << "Hi " << name << endl;
}

void test_pointer(int* thePointer){
  *thePointer = 10;
}

// int** p = int*(*p)
void test_ptr_to_ptr(int** thePointer){
  *thePointer = &global;
}

int main(){
  int nums[] = {1,2,3};
  cout << *nums+1 << endl;
  cout << &(nums[0]) << endl;
  // delete[] nums;

  // alloc dynamic mem using 'new' keyword
  int* p = new int;
  *p = 25;
  cout << p << endl;
  cout << p << endl;
  delete p;
  p = nullptr; // or p = null; p = 0;

  int size; 
  cin >> size;
  int* arr = new int[size];
  for(int i=0; i < size; ++i){
    arr[i] = (i+1)*10;
  }

  for(int i=0; i < size; ++i){
    cout << arr[i] << endl;
  }

  // common pattern to avoid undef behavior
  delete[] arr;
  arr = nullptr;
  
  great();


  return 0;
}
