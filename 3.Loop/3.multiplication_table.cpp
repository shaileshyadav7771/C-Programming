#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter no who's table need to show: ";
  cin >> number;

  for(int i =0 ; i <= number ; i++)
             {
               cout << number << " * " << i << " = " << (number * i) << endl;
             }

  return 0;
}

//Output

// Enter no who's table need to show: 25
// 25 * 0 = 0
// 25 * 1 = 25
// 25 * 2 = 50
// 25 * 3 = 75
// 25 * 4 = 100
// 25 * 5 = 125
// 25 * 6 = 150
// 25 * 7 = 175
// 25 * 8 = 200
// 25 * 9 = 225
// 25 * 10 = 250
// 25 * 11 = 275
// 25 * 12 = 300
// 25 * 13 = 325
// 25 * 14 = 350
// 25 * 15 = 375
// 25 * 16 = 400
// 25 * 17 = 425
// 25 * 18 = 450
// 25 * 19 = 475
// 25 * 20 = 500
// 25 * 21 = 525
// 25 * 22 = 550
// 25 * 23 = 575
// 25 * 24 = 600
// 25 * 25 = 625
