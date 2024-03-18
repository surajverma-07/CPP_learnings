#include <iostream>

using namespace std;
//ambiguity resolution 

class base1 
{
  public : 
         void great()
         {
            cout<<"\n how are you ?\n";
         } 


};
class base2 
{
  public : 
         void great()
         {
            cout<<"\n To kaise hai aap log ?\n";
         } 
};
 class Derived : public base1 , public base2
 {
    public:
    void great()
    {
        base1 :: great();
    }
 };

class B
{ 
    public:
     void say()
     {
        cout<<"Hello,World!";
     }
};
class D : public B
{
    public:
    void say()
    {
        cout<<"Hello harry sir "<<endl;
    }
};
int main()
{
    // Ambiguity 1 
    base1 o1;
    base2 o2;
    o1.great();
    o2.great();
    Derived d;
    d.great();

  //Ambiguity 2 
//   B obj1;
//   D obj2;
//   obj2.say();//Derived class function overright the Base class function
    return 0;
}