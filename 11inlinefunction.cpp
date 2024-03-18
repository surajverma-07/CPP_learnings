#include<iostream> 

using namespace std;
  int product(int a,int b)
{
    static int c=0;//This executes only once
    c=c+1;//next time this function is run,the value of c will be retained
    return(a*b)+c;
}
// using inline every calling fucntion excecute at the calling of function
// don't use inline in loops and with statics       
//inline is a request of programmer to compiler then compiler check your program 
//then he allowed the function inline
//  inline int product(int a,int b)
// {
//     return(a*b);
// }
float moneyreceived(int curentmoney,float factor=1.04)//default argument --> by default if we not give value the function  ::condition default argument should be in last 
{
    return(curentmoney*factor);
}
int main()
{
   int a,b;
    cout<<"Enter the number for multiplication  : ";
    cin>>a>>b;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    cout<<"Product of "<<a<<"and "<<b<<"is  "<<product(a,b)<<endl;
    int money=1000000;
    cout<<"If you have "<<money<<" Rs in your bank acount ,you will recive "<<moneyreceived(money)<<" Rs after 1 year";
    cout<<"for VIP If you have "<<money<<" Rs in your bank acount ,you will recive "<<moneyreceived(money,1.1)<<" Rs after 1 year";

    
  return 0;
}
//constant const int pi=3.14;  means value is always constant we can't change