#include<iostream> 

using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float rate;
    float rvalue;
  public:
   bankdeposit(){}//improtant to make default constructor
    bankdeposit(int p , int y , float r);
   bankdeposit(int p , int y , int r);
    void display();
};
 
 bankdeposit :: bankdeposit(int p, int y , float r)//rate in format lik 0.04
 {
    principal = p;
    years = y;
    rate = r;
    rvalue = principal;
    for (int i = 0; i < y ; i++)
    {  
      rvalue = rvalue*(1+rate);//logic for compound intrest here is rate 
    }
    
 }
 bankdeposit :: bankdeposit(int p, int y , int r)//rate in format like 0.04
 {
    principal = p;
    years = y;
    rate = float(r)/100;
    rvalue = principal;
    for (int i = 0; i < y ; i++)
    {  
      rvalue = rvalue*(1+rate);//logic for compound intrest here is rate 
    }
    
 }
 void bankdeposit :: display()
 {
    cout<<"\n Principal amount was "<<principal
    <<"Return value after  "<<years<<" years "<<" is "<<rvalue<<endl;   
 }
int main()
{
    bankdeposit bd1, bd2 , bd3;
     int p,y,r;
     float R;

    // bd3.display();
     cout<<"\n Enter the value of principal rate and years of investment  ";
     cout<<"\nprincipal :\t";
     cin>>p;
     cout<<"\nrate(in points) :\t";
     cin>>R;
     cout<<"\ntime :\t";
     cin>>y;
     bd1 = bankdeposit(p , y , R);
     bd1.display(); 

     cout<<"\n Enter the value of principal rate and years of investment  ";
     cout<<"\nprincipal :\t";
     cin>>p;
     cout<<"\nrate(in %) :\t";
     cin>>r;
     cout<<"\ntime :\t";
     cin>>y;
     bd2 = bankdeposit(p , y , r);
     bd2.display(); 
  return 0;
}