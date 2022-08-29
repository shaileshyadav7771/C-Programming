//WAP to check if use age less than 12 and greater than 50 then he'll
//be eligible for offer.
#include <iostream>
using namespace std;

int main(){
  int age;
  cout << "Please Enter age : ";
  cin >> age;

  if (age <= 12 || age >= 50)
      {
        cout << "You are eligible for offer :) .. ";
      }
  else
    {
      cout << "Sorry you are not eligible .. ";
    }

  return 0;
}

//Output
// Please Enter age : 77
// You are eligible for offer :) ..

// Please Enter age : 77
// You are eligible for offer :) ..
