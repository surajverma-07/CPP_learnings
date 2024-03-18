#include<iostream>
using namespace std;
//function prototype or function declaration 
int sum(int,int);//int sum(int a,int b)is also right
int main()
{
  
  int num1,num2;
  cout<<"\n Enter the number 1 : ";
  cin>>num1;
  cout<<"\n Enter the number 2 : ";
  cin>>num2;
  cout<<"\n\n The sum is  "<<sum(num1,num2);//function calling here num1 and num2 are actual parameter 
  
    return 0;
}
//function defination
int sum(int a ,int b)//a and b are formal parameter & it's copy of actual parameter it could be same or different from actual parameter
{
    return(num1+num2);
}
// function type
/*
   void functionname (no argument);
   void functionname (with argument);
   int functionname (no argument);
   int functionname (with argument);
*/