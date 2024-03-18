//#include<iostream> 

// using namespace std;
//Procedure Oriented Programming POP's   jo pahle karte aaye hain
// Object Oriented Programming OOP'S
// C+OOP'S ---> C++
//works on concept of classes and objects
//classes is a template to create objects 
//Objects---> Basic rum time entities ,when we made object then compiler allocate memory
// Data Abstraction & Encapsulation ---> Wrapping data and functons into single unit.
// Inheritance ---> (parants gins comes into children)---> Properties of one class can be inherited into others (best example of code reusablity and readability increase ) 
//Polymorphism---> ability to take more than one form.
//Dynamic Binding ---> code which will execute is not known until the program runs.
//Message Passing ---> Object.message(information)     call format

//Structure VS classes 
// we can't hide data in structure 
// we can't access function in structure 

/*  class Employee
{
   private :
      int a,b;
   public : 
     int c,d,e;

   void setdata(int a1,int  b1);//function defination\prototype
   void getdata()
   {
    cout<<" The value of a is  "<<a<<endl;    
    cout<<" The value of b is  "<<b<<endl;    
    cout<<" The value of c is  "<<c<<endl;    
    cout<<" The value of d is  "<<d<<endl;    
    cout<<" The value of e is  "<<e<<endl;    
   }

};//no need to typedef we can access by Employee only 

void Employee :: setdata (int a1,int b1)
{
  a=a1;
  b=b1;
}


int main()
{
  Employee harry;//sun is object of class Employee
    
  harry.setdata(1,2);
  harry.c=3;
  harry.d=4;
  harry.e=5;
  //harry.a=19;  THis will throw error as a is privet
  <<endlharry.getdata();

  //  sun.c=3;   
  //  sun.d=4;   
  // sun.e=5;   
  return 0;
}  */

#include<iostream> 

using namespace std;
class cricket
{
   private : 
    int msdhoni,virat,rohit;
    public : 
    int sachin,raina,abd;
     
     void setdata(int a,int b,int c);
     void getdata()
     {
        cout<<"jersy number of ms dhoni is  "<<msdhoni<<endl;  
        cout<<"jersy number of rohit sharma  is  "<<rohit<<endl;  
        cout<<"jersy number of virat kohli is  "<<virat<<endl;  
        cout<<"jersy number of sachin is  "<<sachin<<endl;  
        cout<<"jersy number of raina  is  "<<raina<<endl;  
        cout<<"jersy number of abd is  "<<abd<<endl; 
     }

};
void cricket :: setdata(int a,int b,int c)
{
  msdhoni=a;
  virat=b;
  rohit=c;
  abd=17;
}
int main()
{
  cricket mahi;
  mahi.setdata (7,18,45);
  mahi.raina=27;
  mahi.sachin=10;
  mahi.abd=71;
  //mahi.virat=81;//error as vitat is pvt. member
  mahi.getdata();
  return 0;
}
