#include <iostream>
using namespace std;

int main() {
  //Case1
  // char S1[10];
  // cout << "Enter your name: ";
  // cin >> S1;
  // cout << "Welcome " << S1 <<endl;
  /*
  Enter your name: shailesh yadav
  Welcome shailesh
  */

  //Case2
  // char S2[20];
  // cout << "Enter your name: ";
  // cin.get(S2,20);
  // cout << "Welcome " << S2 <<endl;
  /*
  Enter your name: shailesh yadav
  Welcome shailesh yadav
  */
  //To read multiple line input from get use cin.ignore()

  //Case3
  char S3[20];
  cout << "Enter your name: ";
  cin.getline(S3,20);
  cout << "Welcome " << S3 <<endl;
  /*
  Enter your name: abc def ghi
  Welcome abc def ghi
  */
  return 0;
}
