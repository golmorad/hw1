//Mehrdad Golkia
#include <iostream>
using namespace std;

int main() {
  int a [30]= {0,1};
  cout << "0, 1, ";
  for (int i=2; i<11; i++){
    a[i]=a[i-1]+a[i-2];
    cout << a[i] << ", ";
  }
  cout << endl;
  return 0;
}

