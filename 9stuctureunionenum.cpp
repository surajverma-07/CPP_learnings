#include<iostream> 

using namespace std;

        // typedef struct employ
        //  {
        //  char name;
        //  int  id;
        //  float salary;
        //  }ep;//now we can access struct employ by ep only this is called typedef



       // staructure is a collection of dissimiller type of data
       //if it is structure it takes 9 bytes(4+1+4)    but in union when we access only one data 
        //  union money
        //  {
        //     int rice;
        //     char car;
        //     float dollar;
        //  };

          
int main()
{
//    ep emp1;
//     // struct employ emp[5];
//     // cout<<"\n Enter the data of employes  \n\n";
//     // for (int  i = 0; i < 5; i++)
//     // { 
//     //     cin>>emp[i].name;
//     //     cin>>emp[i].id;
//     //     cin>>emp[i].salary;

//     // }
//     emp1.id = 2345;
//     emp1.name='s';
//     emp1.salary = 9483948297;//per second
//     cout<<"\n\n  data of employes  \n\n";
//     // for (int  i = 0; i < 5; i++)
//     // { 
//     //     cout<<emp[i].name;
//     //     cout<<emp[i].id;
//     //     cout<<emp[i].salary;
       

//     // }
        
//         cout<<"Name of employ is  "<<emp1.name<<endl;
//         cout<<"Id of employ is  "<<emp1.id<<endl;
//         cout<<"salary  of employ is  "<<emp1.salary<<endl;   */



        // union   ---> like structure but provide better memory management 

    //  union money m1;
    //  m1.rice=990;
    //  m1.car = 'r';
    //  m1.dollar=100.5;
    //  cout<<m1.rice<<endl;
    //  cout<<m1.car<<endl;
    //  cout<<m1.dollar<<endl;
    //  // in this process we get garbage value because we access only one memory with the help of union
    enum Meal{breakfast,lunch,dinner};//by default get 0,1,2......
    Meal m1=lunch;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<(m1==2)<<endl;//comparision
  return 0;
}