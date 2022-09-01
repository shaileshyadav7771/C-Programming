#include <iostream>
using namespace std;

int main() {

  int twoD_array[2][3] = {{10,20,30},{40,50,60}};
  for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          cout << twoD_array[i][j] << " ";
        }
        cout << endl;
    }

  return 0;
}

//Output
// 10 20 30
// 40 50 60
