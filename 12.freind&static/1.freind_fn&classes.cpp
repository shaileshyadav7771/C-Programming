#include<iostream>
using namespace std;

class Test
{
    private:
      int a;
    protected:
      int b;
    public:
      int c;

    friend void fun();
};

void fun()
{
  Test t;
  t.c = 10;
  // cout<< "c val is: " << t.c <<endl;
}
