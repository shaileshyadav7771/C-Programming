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
  //let us access above elements by using pointer..
  Rectangle *p;
  p = new Rectangle;
  p -> length = 10;
  p -> breadth = 10;
  cout << "area is: " << p -> area() << endl;


  return 0;
}
