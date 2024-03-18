#include<iostream> 

using namespace std;
// void swap(int a,int b)//function calling by it's value this will not chage the value of x and y
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// void swapptr(int* a,int* b)
// {
//     int temp;
//      temp= *a;
//       *a=*b;
//       *b=temp;
// }
void swapref(int &a,int &b)
{
    int temp;
    temp= a;
    a=b;
    b=temp;
}
// int &  swapref(int &a,int &b)
// {
//     int temp;
//     temp= a;
//     a=b;
//     b=temp;
// }  
int main()
{
    int x,y;
    cout<<"\n Enter the value of x and y ";
    cin>>x>>y;
 //   swap( x,y);//function calling by it's value this will not chage the value of x and y
   //  swapptr( &x, &y);//function calling by reference use pointer ,this will chage the value of x and y
   swapref(x,y);
   //swapref(x,y)=777;
    cout<<"\n Swaped values are  x=  "<<x<<"  and y=  "<<y;
  return 0;
}