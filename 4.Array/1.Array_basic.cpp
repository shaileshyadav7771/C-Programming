#include <iostream>
using namespace std;

int main() {
  int A[7] = {0,1,2,3,4,5,6};
  int B[5]; //here we have not initialized value..
  int C[10] = {100};

  for (int i = 0; i < 7; i++) {
    cout << A[i] <<endl;
  }

  for (int i = 0; i < 5; i++) {
    cout << B[i] <<endl;//It will give garbage value..
  }

  for (int i = 0; i < 10; i++) {
    cout << C[i] <<endl;
  }

  return 0;
}

//Output
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 4199136
// 0
// 4201056
// 6422224
// 6422280
