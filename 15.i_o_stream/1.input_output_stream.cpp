#include<iostream>
using namespace std;
#include<fstream>

int main(){

  ofstream ofs("my.txt" , ios::trunc);
  ofs << "Shailesh" << endl;
  ofs << 77 << endl;
  ofs << "EXTC" << endl;

  // append some data in the same file
  ofstream ofs1("my.txt" , ios::app);
  ofs1 << "2016" << endl;


  ofs.close();
  cout << "Done.." << endl;
}
