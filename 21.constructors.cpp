#include<iostream> 

using namespace std;

class complex
{
   int a,b;
   public:
   // Creating a constructor 
   // constructer is a special member function with the same name as of the class.
   // It is used to initialize the objects of it's class
   //It is automatically invoked whenever an object is created 

   complex(void);// Constructor declaration
   void display()
   {
    cout<<"Your complex number is  "<<a<<" + "<<b<<"i"<<endl;
   }
};
complex :: complex()//---> this is a default constructor as it accept no parameter
{
    a=24;
    b=39;
   // cout<<"Hello world!";//it's also work
}
int main()
{
    complex c1;
    c1.display();
  return 0;
}

// Properties of Constructors 

// 1. It should be declared in the public section of class
// 2. they are automatically invoked whenever the object is created 
// 3. They cannot return values and do not have return types 
// 4. It can have default argument
// 5. We cannot refer to their address 
 
