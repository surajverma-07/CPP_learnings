#include<iostream> 

using namespace std;

// syntax of MULTIPLE INHERITANCE
// Class Derivded: visibility mode  Base1 , visibility mode  Base 2 
//{   
//  class body of class "Derived"
//}
/*
    FOR PROTECTED MEMBER
                                    *****   VISIBILITY MODE    *****
                           Public derivation    Private derivation   Protected derivation
    1.Private member       Not Inherited        Not Inherited        Not Inherited
    2.Public member        public                private              protected
    3.Protected member     protected             private              protected
*/

class Base1
{
  protected:
         int base1int;
         public:
          void set_base1int(int a)
          {
            base1int = a;
          }
};
class Base2
{
  protected:
         int base2int;
         public:
          void set_base2int(int a)
          {
            base2int = a;
          }
};

class Base3
{
  protected:
         int base3int;
         public:
          void set_base3int(int a)
          {
            base3int = a;
          }
};
class Derived : public Base1 , public Base2 ,public   Base3
{
            public:
            void show()
            {
                cout<<"\n the value of base 1 is  "<<base1int<<"\n";
                cout<<"\n the value of base 2 is  "<<base2int<<"\n";
                cout<<"\n the value of base 3 is  "<<base3int<<"\n";
                cout<<"\n The sum of  "<<base1int<<" , "<<base2int<<" and "<<base3int<<" is "<<base1int+base2int+base3int<<endl;
            }
};
/*
The inherited derived class will someting like this;
base1int ---> Protected
base2int ---> Protected

Member function :
set_base1int ---> public
set_base2int ---> public
show------------> public
*/
int main()
{
    Derived d;
    d.set_base1int(596);
    d.set_base2int(777);
    d.set_base3int(345);
    d.show();
  return 0;
}