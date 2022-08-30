#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter no who's natural no need to find: ";
  cin >> number;
  int sum=0;
  for (int i=1 ; i <=number ; i++)
            { sum += i;
              cout << "Sum is : " << sum ;
              cout << endl;
            }
  return 0 ;

}

//Output

// Please enter number: 10
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
