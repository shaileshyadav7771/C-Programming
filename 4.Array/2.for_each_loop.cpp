#include <iostream>
using namespace std;
#include <typeinfo>

int main() {
     float  A[] = {10.9f,20,30};

     for (auto x : A)

     {
       cout << x << endl;
       cout << typeid(x).name() << endl;
     }

  return 0;
}

//Output
// 10
// 20
// 30
