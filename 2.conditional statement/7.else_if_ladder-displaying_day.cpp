#include <iostream>
using namespace std;

int main(){
  int d;
  cout << "Enter Day number : ";
  cin >> d;
  if (d == 1)
     cout << "It is Monday." <<endl;
  // if (d == 1)
  //    cout << "It is Tuesday." <<endl;
  else if (d == 2)
     cout << "It is Tuesday." <<endl;
  else if (d == 3)
     cout << "It is Wednesday." <<endl;
  else if (d == 4)
     cout << "It is Thursday." <<endl;
  else if (d == 5)
     cout << "It is Friday." <<endl;
  else if (d == 6)
     cout << "It is Saturday." <<endl;
  else if (d == 7)
     cout << "It is Sunday." <<endl;
  else
     cout << "Please Enter Number from 1 to 7 ..." <<endl;

return 0;
}

//Output
// Enter Day number : 10
// Please Enter Number from 1 to 7 ...

// Enter Day number : 10
// Please Enter Number from 1 to 7 ...
