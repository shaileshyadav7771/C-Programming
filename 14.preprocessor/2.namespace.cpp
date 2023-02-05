#include<iostream>
using namespace std;

namespace first
{
  void func(){
    cout << "Fisrt...";
  }
}

namespace second
{
  void func(){
    cout << "2nd...";
  }
}

int main(){
  first :: func();
}
