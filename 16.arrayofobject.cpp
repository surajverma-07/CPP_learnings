#include<iostream> 

using namespace std;
// store the information of employee using class and object of array type
class employee
{
    public : 
    int id;
    float salary;
    string s;
    void setdata()
    {
        cout<<"\n Enter the name , id  and salary of an employee  "<<endl;
        cin>>s>>id>>salary;
    }
    void display();
};
void employee :: display()
{
    cout<<s<<"\t"<<id<<"\t"<<salary<<endl;
}
int main()
{
    int n;
    cout<<"\n Enter the number of employee \t";
    cin>>n;
    employee emp[n];
    for (int i = 0; i < n; i++)
    {
        emp[i].setdata();
    }
    cout<<"name\tid\tsalary"<<endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }
    
  return 0;
}