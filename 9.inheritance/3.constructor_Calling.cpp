#include<iostream>
using namespace std;

class Base
{
public:
  //default constructor...
  Base(){
    cout << "default constructor of Base/Parent class" <<endl;
  }
  //Parameterized constructor of Parent Class..
  Base(int x){
    cout << "Parameterized of Base/Parent class is : " << x << endl;
  }
};

class Derived:public Base
{
public:
   Derived(){
     cout<<"Non-Param Derived"<<endl;
   }
   // Parameterized constructor of child class.
   Derived(int y){
     cout<<"Param of Derived "<<y<<endl;
   }
   // Parameterized constructor of child class(calling parameterized of Base Class).
   Derived(int x,int y):Base(x)
   {
   cout<<"Param of Derived "<<y<<endl;
   }
};

int main()
{
  // Derived d;
  //o:P
  // default constructor of Base/Parent class
  // Non-Param Derived

  // Derived d(100);
//  o/p:
//   default constructor of Base/Parent class
//   Param of Derived 100

  Derived d(100, 700);
  // Parameterized of Base/Parent class is : 100
  // Param of Derived 700
}
