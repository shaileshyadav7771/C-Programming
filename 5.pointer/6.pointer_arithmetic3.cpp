#include <iostream>
using namespace std;

int  main() {
  int A[5] = {2,4,6,8,10};
  int *p = A;
//Displaying address where p is pointing..
  cout << "P is pointing at address : " << p <<" Value is :" <<*p <<endl;

  for (int i = 0; i < 5; i++) {
    cout << *p <<endl;
    p++;
  }

  cout << "P is pointing at address : " << p <<" Value is :" <<*p <<endl;

  return 0;
}
//Output

// P is pointing at address : 0x61fef4 Value is :2
// 2
// 4
// 6
// 8
// P is pointing at address : 0x61ff04 Value is :10
