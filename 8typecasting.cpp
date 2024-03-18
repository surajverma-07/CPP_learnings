#include<iostream>
using namespace std;
int c=45;
int main()
{
   /* **** Built in Data Types ****  */


    // int a,b,c;
    // cout<<"Enter the value of a :   ";
    // cin>>a;
    // cout<<"\nEnter the value of b :   ";
    // cin>>b;
    // c=a+b;
    // cout<<"\nThe sum c =  "<<c; 
    // cout<<"\nGloble value of c  =  "<<::c;//to print globle value of any variable -> cout<<::variablename 
    // here :: is called scope resolution operator

//  ********** Float , double and long double Literals **********  

    // float s=8.983f;
    // long double p=8.983l;
    // cout<<"s= "<<s<<endl<<"p= "<<p<<endl;  
    // //34.4 consider as double
    // // to pass float 34.4f/34.4F
    // // //for long  34.4l/L
    // int a=34;
    // float b=45.87;
    // cout<<"\n The size of a=34 is   "<<sizeof(a);
    // cout<<"\n The size of b=45.87is "<<sizeof(b);
    // cout<<"\n The size of 34.0 is   "<<sizeof(34.0);
    // cout<<"\n The size of 34.4 is   "<<sizeof(34.4);
    // cout<<"\n The size of 34.4f is  "<<sizeof(34.4f);
    // cout<<"\n The size of 34.4F is  "<<sizeof(34.4F);
    // cout<<"\n The size of 34.4l is  "<<sizeof(34.4l);
    // cout<<"\n The size of 34.4L is  "<<sizeof(34.4L);


// // ************** Refrence Variable ****************
  //vojasvi---> sakshi ---> shradha ---> noni
  float sakshi = 948;
  float &shradha=sakshi;
  cout<<sakshi;
  cout<<endl<<shradha;
  shradha++;
  cout<<endl<<sakshi;


  /*    ***** type casting *****        */ 

 float a=45.53;
 int b=65;
 cout<<"the value of a is "<<a<<endl;
 cout<<"the value of a is "<<(int)a<<endl;
 cout<<"the value of a is "<<int(a)<<endl;


//  cout<<"the value of b is "<<b<<endl;
//  cout<<"the value of b is "<<float(b)<<endl;

//   int c=int(a);

//   cout<<"The expression is  "<<a+b<<endl;
//   cout<<"The expression is  "<<int(a)+b<<endl;
//   cout<<"The expression is  "<<(int)a+b<<endl;
  
}