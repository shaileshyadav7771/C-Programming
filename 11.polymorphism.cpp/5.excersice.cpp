# include<iostream>
using namespace std;

//It is Interface (pure virtual fn-child classes needs to provide support/Implementation)
class Shape
    {
    public:
         virtual void area()=0;
        //  virtual void circle()=0;
    };


class Rectangle:public Shape
{
  public:
    void area(){
      cout<< "Area of Rectangle " << endl;
    }
};


class Circle:public Shape
{
  public:
    void area(){
      cout<< "Area of Circle " << endl;
    }
};


int main()
{
Shape *p = new Rectangle;
p -> area();
p = new Circle;
p -> area();

};
