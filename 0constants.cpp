#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // int a=53;
    // cout<<"The value of a was :  "<<a;
    // a=56;
    // cout<<"The value of a is  :  "<<a;

    // //constant in c++
    // const float pi=3.14;
    // cout<<"The value of b was  "<<pi<<endl;
    // pi=45;//error because pi is declare as a constant 
    // cout<<"The value of b is  "<<pi<<endl;

    //manipulators use header file <iomanip>
//     int a=4,b=87,c=900;
//      cout<<"The vlaue of a is  :  "<<a<<endl;
//      cout<<"The vlaue of b is :  "<<b<<endl;
//      cout<<"The vlaue of c is :  "<<c<<endl;
       
    //    cout<<"\n with setw \n";

    //  cout<<"The vlaue of a is :  "<<setw(10)<<a<<endl;
    //  cout<<"The vlaue of b is :  "<<setw(10)<<b<<endl;
    //  cout<<"The vlaue of c is :  "<<setw(10)<<c<<endl;
     /*
     
The vlaue of a is  :  4
The vlaue of b is :  87
The vlaue of c is :  900

 with setw
The vlaue of a is :           4
The vlaue of b is :          87
The vlaue of c is :         900
     
     */



          //Operator precedence   link-->  https://en.cppreference.com/w/cpp/language/operator_precedence
          int a=2,b=4;
          int c=(((a*b)-6)+a);//precedence which is evaluate first
       cout<<setw(5)<<c<<endl;
}             
