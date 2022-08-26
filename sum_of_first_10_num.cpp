#include <iostream>
using namespace std;

int main() {
  int number;
  float output;
  cout << "Please Enter number : " ;
  cin >> number;
  output = number * (number + 1)/2;
  cout << "Sum of natural number is : " << output ;
  return 0;
}
