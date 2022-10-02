using namespace std;
#include<iostream>

int & func(int &x)
{
  return x;
}

int main() {
  int a = 77;
  //Calling func from main..
  int result = func(a);
  cout << "result is : " << result;

  return 0;
}
