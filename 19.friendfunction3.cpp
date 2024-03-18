#include<iostream> 

using namespace std;
//forward declaration
class c1;
class c2;
class c1
{
   int a;
   friend void swap(c1 &,c2 &);
   public : 
   void setdata(int value)
   {
          a=value;
   }
   void display()
   {
    cout<<a<<endl;
   }
};
class c2
{
   int a;
   friend void swap(c1 & ,c2 &);
   public : 
   void setdata(int value)
   {
          a=value;
   }
   void display()
   {
    cout<<a<<endl;
   }
};
void swap(c1 &o1,c2 &o2)
{
    int temp;
    temp=o1.a;
    o1.a=o2.a;
    o2.a=temp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.setdata(25);
    oc2.setdata(45);
    swap(oc1,oc2);
    cout<<"swaped value of variable of c1 is ";
    oc1.display();
    cout<<"swaped value of variable of c2 is ";
    oc2.display();
  return 0;
}