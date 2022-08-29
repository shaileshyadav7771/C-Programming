#include <iostream>
using namespace std;

int main(){
  int a=10,b=20,sum;//here sum variable will be accessible throughout the programme.
  if (true)
    sum = a+b;
    cout << "Sum of a+b is : " << sum; // Sum of a+b is : 30

  return 0;
}

//By using dynamic declaration..

int main(){
  int a=10,b=20;
  if (true)
  {
    int sum = a+b; //here Sum will be local scope and valid with if block..
    cout << "Sum of a+b is : " << sum; // Sum of a+b is : 30

  }

  return 0;
}
