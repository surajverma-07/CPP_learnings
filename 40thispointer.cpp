#include<iostream> 

using namespace std;

class A
{
  int a;
  public:
  void setData(int a)
//   A &setData(int a)
  {
    this->a = a;
    // return *this; 
  }
  void getData()
  {
    cout<<"The value of a is  "<<a<<endl;
  }
};
int main()
{
//"this"is a pointer which points to the object which invokes the member function 
    A a;
 a.setData(58);
//   a.setData(5).getData();
 a.getData();
  return 0;
}
































































































































































































