#include<iostream> 

using namespace std;

int main()
{
    int i;
    // cout<<"\n Enter the number of student where marks to be stored in array \n ";
    // cin>>num;
    int marks[5]={10,20,30,40,50};
    // for ( i = 0; i < num; i++)
    // {
    // cout<<"\n Enter the marks of students "<<i+1;
    //     /* code */
    //     cin>>marks[i];
    //     cout<<"\n";
    // }

        for ( i = 0; i < 5; i++)
        {
            cout<<marks[i]<<endl;
        }

        int *p=marks;
        cout<<"The value of *p i s  "<<*p<<endl;
        cout<<"The value of *(p+1) i s  "<<*(p+1)<<endl;
        cout<<"The value of *p i s  "<<*(p+2)<<endl;
        cout<<"The value of *p i s  "<<*(p+3)<<endl;
        cout<<"The value of *p i s  "<<*(p+4)<<endl;
    
  return 0;
}