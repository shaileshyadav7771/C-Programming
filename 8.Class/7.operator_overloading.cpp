#include<iostream>
using namespace std;

class Complex
{
private:

  int real;
  int img;
public:
   Complex(int r=0,int i=0)
       {
           real=r;
           img=i;
       }

   void display()
     {
           cout << real << "  +  i " << img << endl;
     }

     Complex operator+(const Complex &c1); //added
 };

int main()
{
 Complex c1(5,3),c2(10,9),c3;

 c3=c1+c2;

 c3.display();

 c3=c1.operator+(c2);
 c3.display();

}


Complex Complex :: operator+(const Complex &c1) //changes
      {
          Complex temp;
          temp.real=real+c1.real;
          temp.img=img+c1.img;
          return temp;
      }
