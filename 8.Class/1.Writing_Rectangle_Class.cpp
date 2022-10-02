using namespace std;
#include<iostream>

class Rectangle
{
public:
  // defining data member(Created inside stack..when main() program start..)
  int length;
  int breadth;

  //defining function..
  int area(){
    return length * breadth;
  }

  int perimeter(){
    return 2*(length + breadth);
  }
};  //; is very imp..

int main() {
  //now we will be creating an object from Rectangle class..
  Rectangle r1;
  r1.length = 10;
  r1.breadth = 10;
  cout << "Area of Rectangle is: " <<r1.area() <<endl;

  Rectangle r2;
  r2.length = 10;
  r2.breadth = 10;
  cout << "Area of Rectangle is: " <<r2.perimeter() <<endl;


  return 0;
}
