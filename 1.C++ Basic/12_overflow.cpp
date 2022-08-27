#include <iostream>
using namespace std;

int main() {
  /* code */
  char a = 128,j,k;

  //j = a++; //Value of j is : ⌂
  j = a++;
  k = --a;
  cout << "Value of j & k is : " << (int)j << " " << (int)k;
//Value of j & k is : -128 -128

  return 0;
}
