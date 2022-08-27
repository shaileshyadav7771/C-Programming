#include <iostream>
using namespace std;

int main() {
  /* code */
  int a = 10, j;
  // a++;         //A value is: 11
  // ++a;         //A value is: 11
  //a = a+1;        //A value is: 11
  cout << "A value is: " << a;

  j = a++; // So what happen first increment OR assignement
  // Value of a & j is : 11 10
  cout << "Value of a & j is : " << a << " " << j;

  return 0;
}
