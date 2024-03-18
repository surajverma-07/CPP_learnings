#include<iostream> 

using namespace std;

class BaseClass
{
    public:
    int var_base;
   void display()
   {
     cout<<"the value of var_base is  "<<var_base<<endl;
   }
};
class DerivedClass : public BaseClass
{

    public:
    int var_derived;
   void display()
   {
     cout<<"the value of var_derived is  "<<var_derived<<endl;
   }
};
int main()
{
    BaseClass *ptr_BaseClass;
    BaseClass obj_base;
    DerivedClass obj_derived;
    ptr_BaseClass = &obj_derived;
    ptr_BaseClass->var_base = 77;
    // ptr_BaseClass->var_derived = 0707; //this will throw error
    ptr_BaseClass->display();
    DerivedClass *ptr_DerivedClass;
    ptr_DerivedClass = &obj_derived;
    ptr_DerivedClass->var_derived = 99;
    ptr_DerivedClass->var_base = 199;
    ptr_BaseClass->display();
    ptr_DerivedClass->display();
  return 0;
}

// summury -----> 
// pointer of base class can point the object of derived class but not 
// access the member of derived class it's only access the Base class member
