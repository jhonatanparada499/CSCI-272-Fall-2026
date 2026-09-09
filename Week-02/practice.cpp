#include <iostream>
using namespace std;

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
  p = nullptr;

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



  return 0;
}
