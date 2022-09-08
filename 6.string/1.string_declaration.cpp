#include <iostream>
using namespace std;

int main() {
  //intializing an string in stack;
  char S[10] = "Shaileshy";
  cout << "String is : " << S <<endl;
  //String is : Shailesh

  //Without mentioning size.
  char S1[] = "Shaileshyadav";
  cout << "String is without mentioning Size : " << S1 <<endl;
  // String is without mentioning Size : Shaileshyadav

  //intializing each and every character.
  char S2[] = {'s','h','a','i','l','e','s','h','\0'};
  cout << "String every character : " << S2 <<endl;
  // String every character : shailesh

  //Using Pointer..
  char *S3 ="shailesh";
  cout << "String pointer HEAP memory : " << S3 <<endl;
  //String pointer HEAP memory : shailesh

  return 0;
}
