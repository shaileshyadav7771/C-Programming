#include<iostream>
using namespace std;

class MyException : public exception
{

};

int main()
{
	int x=10,y=0,z;

	try
	{
    		if(y==0)
    			throw MyException();
    		z=x/y;
    		cout<<z<<endl;
	}

	catch(MyException e)
	{
		   cout<<"Division by Zero "<<endl;
	}

	cout<<"Bye"<<endl;

}
