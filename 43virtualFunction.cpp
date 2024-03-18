#include<iostream> 

using namespace std;

class BaseClass
{
    public:
    int var_base = 10;
   virtual void display()//virtual ---> overright default behavior
   {
     cout<<"the value of var_base is  "<<var_base<<endl;
   }
};
class DerivedClass : public BaseClass
{

    public:
    int var_derived = 20;
   void display()
   {
     cout<<"the value of var_base is  "<<var_base<<endl;
     cout<<"the value of var_derived is  "<<var_derived<<endl;
   }
};
int main()
{
    BaseClass *ptr_BaseClass;
    BaseClass obj_base;
    DerivedClass obj_derived;
    ptr_BaseClass = &obj_derived;
    ptr_BaseClass->display();
     DerivedClass *ptr_derivedClass;
  
}