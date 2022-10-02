using namespace std;
#include<iostream>

int * func(int size) {
  //creating an array in Heap
  int *p = new int[size];
  cout << "Add of p is: " << p << endl;
  for (int i = 0; i < size; i++) {
    p[i] = i + 1;
  }
  return p;
}

int main() {
  int *q = func(5);
  cout << "Add of q is: " << q << endl;
  for (int i = 0; i < 5; i++) {
    cout << q[i] <<endl;
  }
  return 0;
}
