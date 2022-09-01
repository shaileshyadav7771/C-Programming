#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int value_list[] = {10,10,10,10,10};

  for (int each_value : value_list)
       {
          sum += each_value;
       }
  cout << "Sum of all value in Array is : " << sum;

  return 0;
}

//Output
// Sum of all value in Array is : 50
