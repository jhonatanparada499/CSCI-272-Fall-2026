#include <iostream>
#include <vector>
#include <algorithm> //req by sort()
using namespace std;

int main(){
  vector<int> v2(5,0);
  vector<int> v1 = {2,1,3};
  sort(v1.begin(), v1.end());

  for (auto it=v1.begin(); it!=v1.end(); ++it){
    cout << *it << " ";
  }
    cout << endl;

  return 0;
}
