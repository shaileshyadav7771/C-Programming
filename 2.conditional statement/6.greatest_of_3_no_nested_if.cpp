#include <iostream>
using namespace std;

int main(){
  float num1,num2,num3;
  cout << "Please Enter 3 numbers : ";
  cin >> num1 >> num2 >> num3;

  if (num1 > num2 && num1 > num3)
              {
                cout << "Number1" << " "<< num1 << "is greater than number2 and number3.";
              }
  else
      {
          if (num2 > num3)
              {
                cout << "Number2"  << " " << num2 << "is greater than num1 and num3.." ;
              }
          else
             {
               cout << "Number3"  << " " << num3 << "is greater than num1 and num2.." ;
             }
      }
  return 0;
}
