#include <iostream>
using namespace std;

int main() {
  int *p = new int[5]; //Creating an array inside Heap memory..
  p[0] = 12;
  p[1] = 13;
  //reading data from heap memory array.
  cout << "Value at 1 index is: " << p[1] <<endl;
  cout << "Value at 2 index is: " << p[2] <<endl;

  //deleting an address.
  delete []p;
  //now assigning null to Pointer
  p = nullptr;

  return 0;
}

/*
Value at 1 index is: 13
Value at 2 index is: 100663302

*/
