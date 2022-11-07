#include<iostream>
using namespace std;

class Parent
{
    private: int a;
    protected: int b;
    public: int c;

// function to access above declared member..
    void funParent()
    {
        a=10;
        b=5;
        c=15;
    }

};

class Child: public Parent
{
    void funChild()
    {
        //a=10;
        b=5;
        c=15;
    }

};

class GrandChild : public Child
{
    public:
    void funGrandChild()
    {
        //a=10;
        b=5;
        c=270;
    }

    int value(){
        cout << "c is : " << c <<endl;
        return c;
    }
};

int main()
{
    GrandChild c;
    //c.a=10;
    //c.b=5;
    c.c=27;
    int value = c.value();
    cout << "value is : " << value <<endl;

}
