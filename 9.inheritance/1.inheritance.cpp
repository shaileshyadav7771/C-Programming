#include<iostream>
using namespace std;

class Base
{
public:
  void display()
  {
     cout << "Display of Base Class... " << endl;
  }
};

class Derived:public Base
{

};

int main()
{
  Base b;
  b.display(); //declared as public so we can access it..
}
