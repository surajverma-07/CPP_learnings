#include<iostream>
using namespace std;
int main()
{
    int i;
    //syntax for for loop
    // for(initialization;condition;updation)
//    for (i = 0; i <= 100; i++)
//   {
//        cout<<i<<endl;
//     /* code */
//   }
// we also have infinite loop if condition is always true


// syntax for while loop
// intitialization;
//while(condition) 
// updation 

// while (i <= 100)
// {
//     cout<<i<<"\n";
//     i++;
//     /* code */
// }


//table of number entered by a user 

i=1;
int num;
cout<<"\n\n Enter the number to print it's table :   ";
cin>>num;
  do 
  { 
    cout<<  num*i<<endl;
    i++;
  }while(i<=10);

}