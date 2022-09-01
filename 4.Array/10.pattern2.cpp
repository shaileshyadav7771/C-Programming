#include <iostream>
using namespace std;

/*print
*
* *
* * *
* * * * */

int main() {
  for (int i = 0; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
          if (i >= j)
              {
                 cout << "* ";
              }
        }
        cout << endl;
    }

  return 0;
}
