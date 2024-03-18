/*
    FOR PROTECTED MEMBER
                                    *****   VISIBILITY MODE    *****
                           Public derivation    Private derivation   Protected derivation
    1.Private member       Not Inherited        Not Inherited        Not Inherited
    2.Public member        public                private              protected
    3.Protected member     protected             private              protected
*/

#include <iostream>

using namespace std;
// Multilevel Inheritance
class Student
{

protected:
  int roll_number;

public:
  void set_rollnum(int);
  void get_rollnum(void);
};
void Student ::set_rollnum(int r)
{
  roll_number = r;
}
void Student ::get_rollnum()
{
  cout << "\n The roll number of a student is  " << roll_number << endl;
}

class Exam : public Student
{
protected:
  float maths;
  float physics;
 //float chemistry;

public:
  void set_marks(float, float);
  void get_marks();
};
void Exam ::set_marks(float m1, float m2)
{
  maths = m1;
  physics = m2;
  //chemistry = m3;
}
void Exam ::get_marks()
{
  cout << "\n The marks obtain in Mathematics is  "<<maths<< endl;
  cout << "\n The marks obtain in Physics is  "<<physics<< endl;
  // cout << "\n The marks obtain in Chemistry is  " << chemistry << endl;
}

class Result : public Exam
{
  float percentage;

public:
  void display()
  {
    get_rollnum();
    get_marks();
    float per = (maths+physics)/2;
    cout << "\n Your percentage is  " << per << endl;
  }
};
int main()
{
/*     NOTES 
       If we are Inheriting B from A and C from B :[A---> B ----> C]
       1. A is base class for B and B is base class for C
       2. A--->B--->C is called Inheritance Path

 
  */
    Result harry;
    harry.set_rollnum(299);
    harry.set_marks(90.89,88.76);
    harry.display();
  return 0;
}