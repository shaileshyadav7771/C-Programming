#include <iostream>
using namespace std;


int main() {

  for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          cout << i << "  " << j << endl;
        }
    }

  return 0;
}


//Output
// 0  0
// 0  1
// 0  2
// 1  0
// 1  1
// 1  2
// 2  0
// 2  1
// 2  2
