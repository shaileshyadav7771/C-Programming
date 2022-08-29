#include <iostream>
using namespace std;

int main(){
  int a,b;
  float c;
  cout << "Please Enter two number : ";
  cin >> a >> b;

  if (b == 0)
     {
       cout << "Number b is zero so can not be divided by 0..";
     }
  else
     {
       c = (float) a/b;
       cout << "Division of a/b is : " << c <<endl;
     }

return 0;

}

// //Output
// Please Enter two number : 1 100
// Division of a/b is : 0.01
