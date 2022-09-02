#include <iostream>
using namespace std;

int  main() {
  int x = 10;
  //creating a reference to x with y name.
  int &y = x;
  cout << "x value is : "<< x <<endl;
  //x value is : 10

  //Now let us increse x and y Value
  x++;
  y++;
  cout << "x value after increment is : "<< x <<endl;
  //x value after increment is : 12

  cout << "Address of x: " << &x <<" Address of y is :" << &y <<endl;

  int b=20;
  y=b;
  cout << y <<" " <<  x <<endl;
  cout << "Address of x: " << &x <<" Address of y is :" << &y <<endl;

  return 0;
}
