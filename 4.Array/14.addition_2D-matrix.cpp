#include <iostream>
using namespace std;

int main() {

  int first_array[2][3] = {{10,20,30},{40,50,60}};
  int second_array[2][3] = {{10,20,30},{40,50,60}};
  int third_array[2][3] ;

  for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          third_array[i][j] = first_array[i][j] + second_array[i][j];
        }
        cout << endl;
    }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
          {
            cout << third_array[i][j] << " ";
          }
    cout << endl;
  }

  return 0;
}
