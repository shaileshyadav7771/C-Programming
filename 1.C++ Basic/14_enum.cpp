#include <iostream>
using namespace std;

enum day { mon, tue , fri };
enum market {growels=10 , Bigbazar , DMart=25 , Fmart  };

int main() {
  day d ;
  d = mon;
  cout << "Day is :" << d <<endl;  //Day is :0
  //we can use constant directly
  cout << "Day is :" << fri <<endl;  //Day is :2

  ///////Case2
  cout << "========================" <<endl;
  cout << "Market Bigbazar value is :" << Bigbazar <<endl;
  cout << "Market Fmart value is :" << Fmart <<endl;

  return 0; 

}

// Day is :0
// Day is :2
// ========================
// Market Bigbazar value is :11
// Market Fmart value is :26
