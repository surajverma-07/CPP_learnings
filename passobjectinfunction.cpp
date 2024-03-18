#include<iostream> 

using namespace std;
// sum of complex number using classes and object passing in a functio
class complex
{ 
    int a,b;
    public : 
           void setdata(int n1,int n2)
            {
                a=n1;
                b=n2;    
            }
           void setdatabysum(complex o1,complex o2)//here o1 and o2 are object of class complex
            {
                a= o1.a + o2.a;
                b=o1.b +o2.b;    
            }
            void display()
            {
                cout<<"Complex no. is  "<<a<<"+i"<<b<<endl;
            }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.display();
    c2.setdata(3,4);
    c2.display();
    c3.setdatabysum(c1,c2);//here we have to pass object
    c3.display();
  return 0;
}