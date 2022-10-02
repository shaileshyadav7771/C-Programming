using namespace std;
# include<iostream>
#include <string.h>

int main()
{
  string str = "WELCOME";
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    count++;
  }
  cout << "Length of string is  : " << count <<endl;


  //2nd Way using String Class inbuilt method
  cout << "Length of string is  : " << str.length() <<endl;


  //3rd Way: Using String Class Iterator..
  string :: iterator it;  //declared
  int count1 = 0;
  for (it=str.begin() ; it != str.end() ; it++) {
    count1++;
  }
  cout << "Length of string iterator is  : " << count1 <<endl;



	return 0;
}
