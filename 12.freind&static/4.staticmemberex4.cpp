#include<iostream>
using namespace std;

class Student
{
public:
  string name;
  int Rollno;
  static int AdmissionNo;

  Student(string naam)
  {
    name = naam;
    AdmissionNo++;
    Rollno = AdmissionNo;
    //It is non static fn so we can happily access variable(else if it is static then we can access only static member)
  }

  void display(){
    cout << "Student Name is: " << name  << endl;
    cout << "-------------------------------------" <<endl;
    cout << "Rollno is : " << Rollno << endl;
    // cout << "Admission no : "<< AdmissionNo << endl;

  }
};

int Student :: AdmissionNo=0;


int main(){
  Student s1("Shailesh");
  Student s2("Munna");
  Student s3("Sheru");

  s1.display();
  s3.display();
 //To know total admission happen till now
 cout << "Total admission happen till now is: "<< Student :: AdmissionNo << endl;

}
