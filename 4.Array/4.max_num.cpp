#include <iostream>
using namespace std;

int main() {
  int max = 0;
  int value_list[] = {10,70,10,50,10,71};

  for (int each_value : value_list)
       {  int first_num;
          first_num = each_value;
          if (first_num > max)
               {
                 max=first_num;
               }
       }
  cout << "Max Number is : " << max;

  return 0;
}

//Output
