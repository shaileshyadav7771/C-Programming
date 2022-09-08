using namespace std;
# include<iostream>
#include <string.h>

int main()
{
  string str = "WELCOME";
  int count = 0;
  string new_str;

  for (int i = 0; str[i] != '\0'; i++) {
    new_str += str[i] + 32 ;
  }
  cout << "Converting Upper case string to lower case : " << new_str <<endl;

	return 0;
}
