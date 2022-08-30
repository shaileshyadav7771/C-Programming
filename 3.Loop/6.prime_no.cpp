#include <iostream>
using namespace std;

int main() {
  int count=0,number;
  cout << "Please Enter number : ";
  cin >> number;

  for (int i=1 ; i <=number ; i++)
      {
        if (number % i == 0)  //checking factor
           count++;
      }
  if (count == 2)
      {
        cout << number << " is Prime no..";
      }
  else
      {
        cout << number << " is not a prime number..";
      }

  return 0;
}

//Output
// Please Enter number : 101
// 101 is Prime no..
