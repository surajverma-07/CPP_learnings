#include <cmath>
#include <iostream>

using namespace std;

class Student
{
    int scores[5];
    public : 
  friend int TotalScore(Student );
    void input();
};
void Student :: input ()
{
    for (int i=0 ; i < 5 ; i++) {
     cin>>scores[i];
    }
} 
int TotalScore(Student s1)
{
     int sum=0;
    for(int i=0 ; i<5 ; i++){
    sum = sum + s1.scores[i];
    }
    cout<<"sum is "<<sum<<endl;
    return (sum);
}
int main() {
       int n;
       cin>>n;                                                                                
       int su[n];
       Student s1[n];
       
       for(int i=0 ; i<n ; i++)
       {
       s1[i].input();
        su[i] = TotalScore(s1[i]);
       }
       cout<<su[0];
       cout<<su[1];
      int c = 0;
        cout<<endl<<c<<endl;
       for(int m=0 ; m<n ; m++)
       {
           if(su[0]<su[m+1])
           {
             c++;
           }
        
        
       }
       cout<<endl<<c;
    return 0;
}
// #include<iostream> 

// using namespace std;

// int main()
// {
//     char temp;
//   string str;
//   cout<<"\n Enter your name ";
//   cin>>str;
//    int len = str.length();
  
//    for (int i = 0; i <= (len-1)/2 ; i++)
//    {
//       temp = str[i];
//       str[i] = str[len-1];
//       str[len-1]=temp;
//       len--;
//    }
//    cout<<"\n revere of your name  :    "<<str<<endl;
   
//   return 0;
// }