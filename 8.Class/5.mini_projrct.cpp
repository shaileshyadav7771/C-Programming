using namespace std;
#include<iostream>

class Student
{
  private:
    string name;
    int rollno;
    int PhysicsMarks;
    int MathsMarks;
    int ChemistryMarks;
  public:
    Student(string naam, int rollno, int PhysicsMarks, int ChemistryMarks, int MathsMarks)
    {
      name = naam;
      rollno = rollno;
      PhysicsMarks = PhysicsMarks;
      cout << "PhysicsMarks : " << PhysicsMarks <<endl;
      ChemistryMarks = ChemistryMarks;
      cout << "ChemistryMarks : " << ChemistryMarks <<endl;
      MathsMarks = MathsMarks;
      cout << "MathsMarks : " << MathsMarks <<endl;
    }

    int total()
    {
      float total_marks = PhysicsMarks + ChemistryMarks + MathsMarks;
      return total_marks;
    }

    char grade()
    {
      float avg = total()/3;

      if (avg > 60) {
        return 'A';
      }

      else if(avg <=40 && avg < 60)
      {
        return 'B';
      }

      else {
        return 'C';
      }

    }
};

int main()
{
   int roll;
   string name;
   int m,p,c;
   cout<<"Enter Roll number of a Student: ";
   cin>>roll;
   cout<<"Enter Name of a Student:";
   cin>>name;
   cout<<"Enter marks in 3 subjects";
   cin>>m>>p>>c;
   Student s(name,roll,p,c,m);
   cout<<"Total Marks: "<< s.total() <<endl;
   cout<<"Grade of Student:"<<s.grade()<<endl;

}
