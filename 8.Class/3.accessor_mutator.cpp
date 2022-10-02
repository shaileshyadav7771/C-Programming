using namespace std;
#include<iostream>

class Rectangle
{
private:
  // defining data member(Created inside stack..when main() program start..)
  int length;
  int breadth;

//defining setter and getter fn..
public:
  //Mutator..
  void setlength(int l){
    if (l < 0)
        length = 1; //if -ve then by default 1.
    else
        length = l;
  }

  void setbreadth(int b){
    if (b < 0)
        breadth = 1;
    else
        breadth = b;
  }

  //Accessor (read)
  int getlength(){
    return length;
  }

  int getbreadth(){
    return breadth;
  }

  //defining function..
  int area(){
    return length * breadth;
  }

  int perimeter(){
    return 2*(length + breadth);
  }
};  //; is very imp..

int main() {
//Now setting value through set and get methods..
  Rectangle r;
  r.setlength(10);
  r.setbreadth(10);

  cout << "get set length is : " << r.getlength() << endl;
  cout << "get set breadth is : " << r.getbreadth() << endl;
  cout << "get set Area is : " << r.area() << endl;
  cout << "get set Paremeter is : " << r.perimeter() << endl;

  return 0;
}
