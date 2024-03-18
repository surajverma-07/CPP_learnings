#include<iostream> 

using namespace std;
int count = 0;

// Destructor never takes an argument nor does it return any value 
class num
{
   public:
   num()
   {
       count++;
       cout<<"This is a time when constructor is called for object number "<<count<<endl;
   }
   ~num(){
    cout<<"THis is a time when destructor is called for object number "<<count<<endl;
    count--;
   }
};

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1 \n";
    num n1;
    {
      cout<<"Entering in block \n";
      cout<<"creating two more objects "<<endl;
      num n2,n3;
      cout<<"exiting This block "<<endl;
    }
    cout<<"Back to main () \n";
  return 0;
}