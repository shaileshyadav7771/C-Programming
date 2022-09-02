#include <iostream>
using namespace std;

int  main() {
  int size;
  cout << "Enter an Array size : " <<endl;
  cin >> size;
  int A[size];
  //Now printing Array length;

  cout << "Size of an Array is : " << sizeof A <<endl;
  return 0;
}

/*
Enter an Array size :
20
Size of an Array is : 80
*/
// Note: 80 Bytes (20 number and each number is occupying 4Bytes)
