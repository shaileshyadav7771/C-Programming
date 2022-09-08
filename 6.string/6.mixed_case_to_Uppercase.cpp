using namespace std;
# include<iostream>
#include <string.h>

int main()
{
  string str = "WeLcOmE5";
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++) {
              if (str[i] >=97 && str[i] <= 122)
              {
                 str[i] = str[i] -32 ; 
              }
  }
  cout << "Uppercase  : " << str <<endl;

	return 0;
}
