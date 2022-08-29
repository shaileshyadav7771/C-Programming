#include <iostream>
using namespace std;

int main() {
  //Calculator- Showing Options::
  cout << "Please select any one options: \n";
  cout << "1. Add\n 2. Sub\n 3. Mul\n 4. Div\n";

  int a,b,c, option;
  cout << "Please Enter Options (1|2|3|4)  : ";
  cin >> option;
  cout << "Enter two number : ";
  cin >> a >> b;

  switch (option) {
    case 1:
          c=a+b;
          cout << "Addition of the two number a and b is :" << c ;
          break;
  }



  return 0;
}

//Output
// Please select any one options:
// 1. Add
//  2. Sub
//  3. Mul
//  4. Div
// Please Enter Options (1|2|3|4)  : 1
// Enter two number : 10 20
// Addition of the two number a and b is :30
