using namespace std;
#include<iostream>

struct Demo
{
  int x;
  int y;

  void display()
  {
    cout <<"Value of x and y is: "<<x <<" "<< y << '\n';
  }
};

int main()
{
  Demo s;
  s.x = 10 ;
  s.y = 100;
  s.display();
}
