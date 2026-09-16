#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v2(5,0);

  for (auto it=v2.begin(); it!=v2.end(); ++it){
    cout << *it << " ";
  }
    cout << endl;

  return 0;
}
