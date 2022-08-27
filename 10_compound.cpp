#include <iostream>
using namespace std;

int main() {
  /* code */
  int a = 10;
  int sum = 20;
  // By using normal method
  sum = sum + a;
  cout << "Sum is normal method: " << sum << endl;  //30
  //By using compound assignment

  sum += a;
  cout << "Sum is after using assignement: " << sum;  //30

  return 0;
}
