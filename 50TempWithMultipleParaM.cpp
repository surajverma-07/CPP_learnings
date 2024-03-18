#include<iostream> 

using namespace std;

/*
  CLASS TEMPLATE WITH MULTIPLE PARAMETER 
  template<class T1 , class T2>
  class class_name
  {
      body of class;
  };
*/
template<class T1 ,class T2 , class T3 > 
class MyClass
{
  public:
  T1 data1;
  T2 data2;
  T3 data3;

MyClass(T1 a, T2 b , T3 c)
{
    data1 = a;
    data2 = b;
    data3 = c;
}
  void display()
  {
    cout<<"Data 1 is  "<<data1<<endl<<"Data 2 is "<<data2<<endl
        <<"Data 3 is  "<<data3<<endl;
  }
};
int main()
{
  MyClass<float,char,string> obj(7.9f,'s',"suraj");
  obj.display();   
  return 0;
}