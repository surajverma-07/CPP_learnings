#include<iostream> 

using namespace std;

class base{
    int data1;//Private by default and not inhritable
    public:
    int data2;
    void setdata();
    int  getdata1();//Alt for multicursior
    int  getdata2();//Alt for multicursior
};
void base :: setdata()
{
  data1 = 10;
  data2 = 20;
}
int  base ::getdata1()
{
  return data1;
}
int  base ::getdata2()
{
  return data2;
}
class Derived :  private base
{
   int data3;
   public: 
   void process();
   void display();
};
void Derived :: process()
{
  setdata();
  data3 = data2*getdata1();//data2*data1
}
void Derived :: display()
{
  cout<<"\n Value of data 1 is  "<<getdata1()<<endl;//data 1 is private so the function is only way to get the value of data1
    cout<<"\n Value of data 2 is  "<<data2<<endl;//we have direct access of data2 from base class as it is public
     cout<<"\n Value of data 3 is  "<<data3<<endl;
}



int main()
{
    Derived der;
    // der.setdata();  it will throw error as the visibility mode of 
    //derived class is private the all member of base class inherited 
    // as privater member in derived class
    der.process();
    der.display();
  return 0;
}