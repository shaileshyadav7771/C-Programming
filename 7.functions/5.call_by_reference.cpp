using namespace std;
#include<iostream>

void swap(int &a, int &b) {
  cout << "Add of a in swap fn: " << &a << " Add of b in swap fn: " << &b <<endl;
  int temp;
  a = b;
  temp = a;
  b = temp;
//here I am using one for loop but
//look like call by reference is working as expected (in this video sir asked that
// If we used loop or complex logic it will be treated as call by address by compiler..)
  for (int i = 0; i < 10; i++) {
    cout << i++ <<endl;
  }
}

int main() {
  int x=10 , y=20;
  swap(x,y);
  cout << "Add of x: " << &x << " Add of y: " << &y;

  return 0;
}
