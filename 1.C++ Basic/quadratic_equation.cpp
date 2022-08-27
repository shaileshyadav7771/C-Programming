#include <iostream>
using namespace std;
#include <cmath>;

int main() {
  float a,b,c,r1,r2;
  cout << "Please enter a,b,c values: ";
  cin >> a >> b >>c;

  r1 = ( (-b) + sqrt(b*b - 4*a*c) )/(2 * a);
  r2 = ( (-b) - sqrt(b*b - 4*a*c) )/(2 * a);
  // for space we will be using " "
  cout << "The Quadaratic values are : " << r1 <<" " << r2;
  return 0;
}
