# include<iostream>
using namespace std;

class base
{
    public:
    	void fun1()
    	{
    		cout<<"fun1 of base"<<endl;
    	}
};


class derived:public base
{
      public:
      	void fun1()
      	{
      		cout<<"fun2 of derived"<<endl;
      	}
};


int main()
    {
    	derived d;
    	d.fun1();
    	return 0;
    }
