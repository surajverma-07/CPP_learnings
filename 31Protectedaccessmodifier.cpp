#include<iostream> 

using namespace std;

class base
{
  protected:
  int pro;
  private:
  int pri;
  public:
  int pub;
};
/*
    FOR PROTECTED MEMBER 
                                    *****   VISIBILITY MODE    *****
                           Public derivation    Private derivation   Protected derivation
    1.Private member       Not Inherited        Not Inherited        Not Inherited
    2.Public member        public                private              protected
    3.Protected member     protected             private              protected
*/
class Derived : public base
{

};
int main()
{
     base b;
     Derived d;
    //  cout<<d.pro; //will not work as 
  return 0;
}