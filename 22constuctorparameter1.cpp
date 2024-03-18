#include<iostream>

using namespace std;

class complex 
{
  private :
   int a,b;
   public :
      complex(int x , int y);//constructor declaration
      void printnum()
      {
         cout<<"Your number is  "<<a<<" + "<<b<<"i"<<endl;
      }
};
complex :: complex(int x , int y)//this is parameterized  constructor as it's take two parameter parameter 
{
   a=x;
   b=y;
}


int main()
{
   //implicit call
   complex o1(45,67);
   o1.printnum();

   // Explicit call
   complex o2= complex(54,76);

   o2.printnum();
   return 0;
}