#include<iostream>
using namespace std;

class Test
{
public:
  int a;
  static int count;

  Test()
  {
    a = 10;
    count++;
  }

  static int get_count()
  {
      //here we can not access non static member for ex a, b,....
      return count;
  }


};

int Test :: count = 0;

int main(){
  Test t1,t2;
  cout << "Count value using obj t1 : " << t1.count << endl;
  //Accessing static fn with obj and with class namespace..
  cout << "Count value via static fn - with obj : " << t1.get_count() << endl;
  cout << "Count value via static fn - with the help of class : " <<Test :: get_count() << endl;
  t1.count = 77;
  cout <<"Value of t2 after changing t1 : "<< t2.count <<endl;


}
