#include <iostream>
using namespace std;

int main() {
  float BasicSalary , allowance_per, deduction_per, Salary;

  cout << "Please Enter Basic Salary : ";
  cin >> BasicSalary;
  cout << "Please Enter Allowance Salary percentage : ";
  cin >> allowance_per;
  cout << "Please Enter deduction_per Salary : ";
  cin >> deduction_per;
  Salary = BasicSalary + (BasicSalary*allowance_per) - (BasicSalary* deduction_per);

  cout << "====================================================" <<endl;
  cout << "Your Net Salary after allwance and deduction is : " << Salary;


  return 0;
}

//Output
// Please Enter Basic Salary : 20000
// Please Enter Allowance Salary percentage : 10
// Please Enter deduction_per Salary : 10
// ====================================================
// Your Net Salary after allwance and deduction is : 20000
