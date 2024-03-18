
#include<iostream> 

using namespace std;

/*
   ** We can use constructor in derived class
   ** if base class cons. without argu. no need to constructor in Derived class.
   ** if onr or more argument in base class constructor then derived class need to pass argu.
   ** if Both Base & Derived class have constructor then Base class constructor execute first
   ** In multiple Inheritance A+B ----> C(Derived class from A & B)  which one of class written first there constructor executed first 
   ** in multilevel inheritance A--> B---> c---> D the counstructor are executed in order of Inheritance
   ** if virtual base class involve then the constructors for virtual Base Class is executed first
*/                                                                               
 
   class Base1
   {
       int data1;
       public:
       Base1(int i)
       {....
       
        data1 = i;
        cout<<"Base 1 class is called "<<endl;
       }
       void PrintData1()
       {
         cout<< "The value of data 1 is "<<data1<<endl;
       }

   };
   class Base2
   {
       int data2;
       public:
       Base2(int i)
       {
        data2 = i;
        cout<<"Base 2 class is called "<<endl;
       }
       void PrintData2()
       {
         cout<< "The value of data 2 is "<<data2<<endl;
       }
   };
   class Derived : public  Base2 , virtual public Base1
   {
     int derived1,derived2;
     public:
     Derived(int a, int c , int d) : Base1(c) , Base2(d)
     {
       derived1 = a;
       derived2 = 2;
       cout<<"Derived class is called "<<endl;
     }
     void PrintDData()
     {
        cout<<"The value of Derived1 is "<<derived1<<endl;
        cout<<"The value of Derived2 is "<<derived2<<endl;
     }
   };
int main()
{
      Derived d(23,45,67);
      d.PrintData1();
      d.PrintData2();
      d.PrintDData();
  return 0;
}