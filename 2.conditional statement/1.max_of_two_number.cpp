#include <iostream>
using namespace std;
typedef float number;

int main() {
  number no1,no2;

  cout << "Please Enter first number : ";
  cin >> no1;
  cout << "Please enter second number : ";
  cin >> no2;

  if (no1 > no2)
     {
       cout << "Number1 is greater than number2..";
     }

  else
       cout << "Number1 is less than Number2..";

  return 0;
}
