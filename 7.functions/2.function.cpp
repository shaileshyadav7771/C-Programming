using namespace std;
#include<iostream>
#include <string.h>

float add(float a, float b) {
  float sum;
  sum = a + b;
  return sum;

}

int main() {
  float a,b,sum;
  a=10.7;
  b=0.36;
  cout << "Sum is : " << add(a,b);
  return 0;
}
