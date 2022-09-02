#include <iostream>
using namespace std;

int  main() {
  int A[5] {2,4,6,8,10};

  int *p = A, *q = & A[4];
  cout << "Pointer p is pointing at : "<< *p  <<endl;
  cout << "Pointer q is pointing at : "<< *q  <<endl;
  cout << "Two pointer diff q-p is : " << q-p;

  return 0;
}
//Output
// Pointer p is pointing at : 2
// Pointer q is pointing at : 10
// Two pointer diff q-p is : 4
