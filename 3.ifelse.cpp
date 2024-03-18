 // structures 
 /*
    1.sequence structure   ---> one by one 
    2.selection structure   ---> condition based execution (True false ) if else....
    3.Loop sturcture   ----> for while ...
 */
#include<iostream>
using namespace std;

int main()
{
   //  ***********   selection stucture  *************  //
    // int age;
    // cout<<"\n Enter your age :   ";
    // cin>>age;
    // if(age<18)
    // {
    //     cout<<"\n\n Sorry ! this is adult only party you are not eligible for this .\n";
    // }
    // else if(age==18)
    // {
    //     cout<<"\n congratulation you are invited in party get your pass from below link \n";
    // }
    // else
    // {
    //     cout<<"Party hard bro";
    // }
      

      //switch case 
      int num;
      cout<<"\n enter your fevourite number : \n";
      cin>>num;

      switch (num)
      {
      case 7: 
            cout<<" ****  you are a fan of MS Dhoni   ****\n"; 
        /* code */
        break;
      case 18:
            cout<<" ****  you are a fan of Virat Kohli   ****\n"; 
        break;
      case 45:
            cout<<" ****  you are a fan of Rohitman sharma   ****\n"; 
                    break;
      case 10:
            cout<<" ****  you are a fan of sachin Tendulkar   ****\n"; 
                         
        break;
      default:
            cout<<" ****  you are a fan of kedar jadhav   ****\n"; 
            
            
        break;
      }
}