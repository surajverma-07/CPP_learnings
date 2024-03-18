//local and globle variable could be same but local variable take precedence that is Local variable>>>>>globle variable if same 
#include<iostream>

using namespace std;
int suraj=5;
void sum()
{

   int suraj=10;
   cout<<endl<<suraj;
}
int main()
{
     int a=34;
     float b=9.34;
   cout<<endl<<suraj;
     sum();
    // cout<<"suraj ! world"<<"\n"<<" the value of a is \t" <<a<<endl<<"the value of b is \t" <<b<<"\n";  
    return 0;
}