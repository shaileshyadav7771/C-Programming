#include <iostream>
using namespace std;

int  main() {
  int A[5] = {2,4,6,8,10};
  int *p = A;
  //Now pointer p will be pointing at first element(first address).
  cout << "Pointer is pointing at : "<< *p <<endl;
  // Pointer is pointing at : 2

  // now let us do p++
  p++;
  cout << "After increment ++ Pointer is pointing at : "<< *p <<endl;

  // now let us do p--
  p--;
  cout << "After decrement -- Pointer is pointing at : "<< *p <<endl;

  return 0;
}

/*
After increment ++ Pointer is pointing at : 4
After decrement -- Pointer is pointing at : 2
*/
