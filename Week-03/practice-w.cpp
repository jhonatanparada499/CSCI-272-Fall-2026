#include <iostream>
#include <vector>
#include <algorithm> //req by sort()
using namespace std;

int main(){
  vector<int> v2(5,0);
  vector<int> v1 = {2,1,3};
  // sort(v1.begin(), v1.end());

  // slower performance to remove or add elements in middle
  v1.insert(v1.begin() + 2, 5);
  v1.erase(v1.begin() + 2);

  // reverse(v1.begin(), v1.end());
  //
  // v1.clear();
  //
  v1.reserve(4);
  cout << v1.capacity() << endl;

  // auto it...
  for (vector<int>::iterator it=v1.begin(); it!=v1.end(); ++it){
    cout << *it << " ";
  }
    cout << endl;

  return 0;
}
