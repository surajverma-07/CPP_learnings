#include<iostream> 

using namespace std;
//static data type is also called class data type and it's value remain same for all the employ 
// count is a static data member of employee
class employ  
{
    int id;
   // int count=0; if this is not static then value is individual for all the employ
//    Enter the id of employ
// 100
// ID of of employ 1is 100

//  Enter the id of employ
// 101
// ID of of employ 1is 101

//  Enter the id of employ
// 102
// ID of of employ 1is 102
   static int count;//no need to initialize as it's by default o
//    Enter the id of employ
// 10001
// ID of of employ 1is 10001

//  Enter the id of employ
// 10002
// ID of of employ 2is 10002

//  Enter the id of employ
// 10003
// ID of of employ 3is 10003
  public :
  void setdata()
  {
    cout<<"\n Enter the id of employ  "<<endl;
    cin>>id;
    count++;
  }
  void display()
  {
    cout<<"ID of of employ "<<count<<"is "<<id<<endl;
  }
  static void functin()
  {
    cout<<"\n value of count is    "<<count;
    //cout<<"\n value of id is    "<<id; We can only access static members of class 
    //              ...in static function so this will trow error
  }
};
int employ :: count=0;//only here we can initialize
int main()
{
    employ emp1,emp2,emp3;
    emp1.setdata();
    emp1.display();
    employ :: functin();//directly access static function without help of object 


    emp2.setdata();
    emp2.display();
    employ :: functin();


    emp3.setdata();
    emp3.display();
    employ :: functin();
  return 0;
}