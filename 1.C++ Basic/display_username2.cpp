#include <iostream>
using namespace std;

int main() {
  string name;
  cout << "Please enter your name : ";
  cin >> name;
  getline(cin,name);
  cout << "Welcome Shailesh Yadav" << name;
  return 0;
}
