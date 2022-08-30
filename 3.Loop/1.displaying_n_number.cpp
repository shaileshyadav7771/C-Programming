#include <iostream>
using namespace std;

// Display n number using while loop..

int main() {

  int i=1,n;
  cout << "Please enter number: ";
  cin >> n;

  while (i <= n) {
    cout << i <<endl;
    i++;
  }

  return 0;
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
