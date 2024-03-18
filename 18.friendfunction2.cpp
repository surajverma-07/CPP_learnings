#include<iostream> 

using namespace std;
//forward declaration
 class y;
 class x;
class x  
{
   int a;
   public :
   void setdata(int value1)
   {
     a=value1;
   }
   friend void sum(x ,y);
};
class y 
{
    int b;
    public : 
    void setdata(int value2)
    {
        b=value2;
    }
    friend void sum(x,y);
};
void sum(x o1,y o2)
{
    cout<<"sum of data of class x & y  is   "<<o1.a+o2.b;
}
int main()
{
    x o1;
    y o2;
    o1.setdata(10);
    o2.setdata(7);
    sum(o1,o2);
  return 0;
}