using namespace std;
#include<iostream>
#include <string.h>

void swap(int a, int b) {
  int temp;
  a = b;
  temp = a;
  b = temp;
}

int main() {
    int x=10 , y=20;
  swap(x,y);
  cout << "Value of x: " << x << " value of y: " << y;
  return 0;
}
