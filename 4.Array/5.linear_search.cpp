#include <iostream>
using namespace std;

int main() {
  int  A[5], n=5, key;
  cout << "Please enter an Array value : ";

  for (int i=0; i < n ; i++)
              {
                cin >> A[i];
              }
  cout << "Enter Key need to Search : ";
  cin >> key;

  for (int i=0; i < n ; i++)
              {
                if (A[i] == key)
                      {
                        cout << key << " is matched at " << i << " index.";
                        return 0;
                      }
              }

  cout << "Sorry Key is not found aftre checking each and every key.";

}

//Output
// Please enter an Array value : 12 13 57 7 9
// Enter Key need to Search : 7
// 7 is matched at 3 index.
