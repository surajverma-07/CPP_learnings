#include <iostream>

using namespace std;

/*
   Student --> Test
   Student --> sports
   Test + sports ---> result
*/
class student
{
protected:
  int roll_num;

public:
  void set_num(int a)
  {
    roll_num = a;
  }
  void Print_num()
  {
    cout << "Your Roll number is  " << roll_num << endl;
  }
};

class test : virtual  public student
{
protected:
  float maths, physics;

public:
  void set_marks(int m1, int m2)
  {
    maths = m1;
    physics = m2;
  }
  void print_marks()
  {
    cout << "Your result is here  : " << endl
         << "Maths :  " << maths << endl
         << "physics : " << physics << endl;
  }
};

class sports : public virtual student
{
protected:
  float score;

public:
  void set_score(float sc)
  {
    score = sc;
  }
  void print_score()
  {
    cout << "Your score is  " << score << endl;
  }
};

class result : public test, public sports
{
  float res;

public:
  void display()
  {
    res = physics + maths + score;
    Print_num();
    print_marks();
    print_score();
    cout << "Your Total score is   : " << res << endl;
  }
};
int main()
{
   result harry;
   harry.set_num(89);
   harry.set_marks(82 , 81);
   harry.set_score(9);
   harry.display();

  return 0;
}
