#include<iostream>
using namespace std;

class Base
{
public:
  int a;
  void display()
  {
     cout << "Display of Base Class... " << endl;
     cout << "A value is: " << a <<endl;
  }
};

class Derived:public Base
{
public:
  void show()
    {
      cout << "Show method in derived fumction.." << endl;
    }

};

int main()
{
  Derived d;
  d.a=77;
  d.display(); //accessing it from child class..
  d.show();
}
