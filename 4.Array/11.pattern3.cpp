#include <iostream>
using namespace std;
/* Output
****
 ***
  **
   *
   */

int main() {
  for (int i = 0; i <= 40; i++)
    {
        for (int j = 0; j <= 40; j++)
        {
          if (i > j)
              {
                 cout << " ";
              }
          else
              {
                cout << "*";
              }
        }
        cout << endl;
    }

  return 0;
}
