#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter no who's factorial need to be find: ";
  cin >> number;
  int factorial = 1;

  for (int i = 1; i <= number ; i++) {
    factorial = factorial * i * 1;
    cout << "factorial is : " << factorial <<endl;
  }

  return 0 ;

}

//Output
// Enter no who's factorial need to be find: 6
// factorial is : 1
// factorial is : 2
// factorial is : 6
// factorial is : 24
// factorial is : 120
// factorial is : 720
