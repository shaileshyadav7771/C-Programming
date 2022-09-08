#include <iostream>
using namespace std;

int  main() {
  int A[5] = {2,4,6,8,10};
  int *p = A;
  // cout << 2[p] << endl;
  // cout << 2[A] << endl;
  cout << p <<endl ; //starting address of A
  cout << "Current pointing value : " << *p <<endl;

  cout << (p+2) <<endl ;
  cout << "Current pointing value : " << *p <<endl;

  p = p+2;
  cout << "Current pointing value : " << *p <<endl;
  //Current pointing value : 6

  return 0;
}

/*
0x61fef8
Current pointing value : 2
0x61ff00
Current pointing value : 2
*/

//Note:In above case current pointing is same because we have used p+2 and displaying but not making any change..
//for change please use p=p+2
