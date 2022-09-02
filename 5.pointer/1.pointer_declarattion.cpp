#include <iostream>
using namespace std;

int main() {
  int a =10;
  int *p = &a;
  cout << "value of a : " << a <<endl;
  cout << "Address of a is : " << &a <<endl;
  cout << "Pointer value : " << p <<endl;
  cout << "Pointer address : " << &p <<endl;
  cout << "Pointer value *p derefrencing : " << *p <<endl;

  return 0;
}
/*
value of a : 10
Address of a is : 0x61ff0c
Pointer value : 0x61ff0c
Pointer address : 0x61ff08
Pointer value *p derefrencing : 10
*/
