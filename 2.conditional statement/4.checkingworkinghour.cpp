#include <iostream>
using namespace std;

int main(){
  int hours;
  cout << "Please Enter hours : ";
  cin >> hours;

  if (hours >= 9 && hours <= 18)
      {
        cout << "It is Working hours .. ";
      }
  else
    {
      cout << "It is non Working hours .. ";
    }

  return 0;

}
