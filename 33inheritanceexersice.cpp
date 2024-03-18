#include <iostream>
#include<math.h>//<cmath>

using namespace std;
/*
  Create 2 classes :
  1. SimpleCalculator - Takes input of 2 numbers using utility function and perform +,-,*,/ and display result
                        using another function .
  2. ScientificCalculator - Takes input of 2 numbers using utility function and perform any four operation of your
   and display result using another function .

   create another class HybridCalculator and inherit it using those 2 classes :
   Q1. what type of inheritace are you using ? ---> Multiple Inheritance
   Q2. which mode of inheritance are you using ? ---> Public
   Q3. Create an object of HybridCalculator and display results of simple and scientific Calculator ?
       How is code reusibility Implemented ?
*/

class SimpleCalculator
{  
  protected:
  int a,b;
   public:
   void getdata1()
   {
    cout<<"\n Enter the value of  a "<<endl;
    cin>>a;
    cout<<"\n Enter the value of  b "<<endl;
    cin>>b;
   }
   void operations1()
   {
     cout<<"The value of a+b is  =  "<<a+b<<endl;
     cout<<"The value of a-b is  =  "<<a-b<<endl;
     cout<<"The value of a*b is  =  "<<a*b<<endl;
     int div;
     if(b != 0)
     {
     cout<<"The value of a/b is  =  "<<a/b<<endl;
     }
     else 
     cout<<"Incorrect input of b ";
   }
};
class ScientificCalculatore
{
  protected :
  int a1,b1;
  public:
  void getdata2()
   {
    cout<<"\n Enter the value of  a1 "<<endl;
    cin>>a1;
    cout<<"\n Enter the value of  b1 "<<endl;
    cin>>b1;
   }
   void operations2()
   {
     cout<<"The value of exp(a1) is  =  "<<exp(a1)<<endl;
     cout<<"The value of exp(b1) is  =  "<<exp(b1)<<endl;
     cout<<"The value of sin(a1-b1) is  =  "<<sin(a1-b1)<<endl;
     cout<<"The value of tan(a1*b1) is  =  "<<(a1*b1)<<endl;
     cout<<"The value of cos(a1/b1) is  =  "<<cos(a1/b1)<<endl;
   }
};

class HybridCalculator : public SimpleCalculator , public ScientificCalculatore
{
    
};
int main()
{
  // SimpleCalculator c1;
  // c1.getdata1();
  // c1.operations1();
  // ScientificCalculatore c2;
  // c2.getdata2();
  // c2.operations2();
  HybridCalculator Calc;
  Calc.getdata1();
  Calc.operations1();
  Calc.getdata2();
  Calc.operations2();
  
  return 0;
}