//recursion
#include<iostream> 

using namespace std;

// fact(int num)
// {
//     if(num==1 || num==0)
//     return 1;
//     else 
//     return ((num)*(fact(num-1)));
    
// }

//fibonacci series 
fibo(int i)
{
    if(i==0)
    return 0;
    else if (i==1)
    return 1;
    else 
    return ((fibo(i-1))+(fibo(i-2)));
}
int main()
{
    //factorial of a number 
    //method 1 without recursion
  int term;
    cout<<"Enter the number of terms \n";
    cin>>term;
//   int num;
//     cout<<"Enter the number to claculate it's factorial \n";
//     cin>>num;
//     for ( i = 1; i <= num ; i++)
//     {
//         /* code */
//         fact=fact*i;
//     }
//     cout<<"\n Factorial of "<<num<<"is  : "<<fact<<endl;


   //method 2 by recursion
   //we have to check to condition for recursion
   // 1. recursive part --> any funcion called itself
   // 2. non recursive it is very importent without it compiler goes in infinte loop
   //******* logic for factorial ******//
   //fact(n)=n*(n-1)*(n-2)*(n-3).....1;
   //1!=1 and 0!=1     *** this is a non recursive part of problem ***//
//    cout<<"\n Factorial of a  "<< num<<"is  "<<fact(num)<<endl;

//logic to print fibonacci series
   for (int i = 0; i < term; i++)
   {
    /* code */
    cout<<fibo(i)<<"\t";

   }
   
  return 0;
}