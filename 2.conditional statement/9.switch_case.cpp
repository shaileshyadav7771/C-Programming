#include <iostream>
using namespace std;

int main(){
  int day;
  cout << "Please Enter a day : ";
  cin >> day;

  switch (day) {
    case 1:
          cout << "Day is : Monday " <<endl;
          break;

    case 2: cout << "Day is :Tuesday" <<endl;
          break;

    default : cout << "Now Supported only 0/1 Mon & Tue..";

  }
return 0 ;

}

//Output is :
// Please Enter a day : 77
// Now Supported only 0/1 Mon & Tue..
