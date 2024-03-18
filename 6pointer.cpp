#include<iostream> 

using namespace std;

int main()
{
    //pointer is data type which hold the adress of other data type variable
    int a=15;
    int *ptr=&a;//ptr is pointer pointing a
    cout<<"The adress of a is  "<<ptr<<endl;
    cout<<"The adress of a is  "<<&a<<endl;
    //print the value of variable 
    cout<<"Value of a is  "<<*ptr<<endl;//*ptr means value of variable pointed by ptr

    //pointer to pointer
    int **ptr2=&ptr;
    cout<<"the adress of ptr is  "<<ptr2<<endl;
    cout<<"the adress of ptr is  "<<&ptr<<endl;
    cout<<"the value at adress ptr2 is  "<<*ptr2<<endl;
    cout<<"the value at adress(value at ptr2) is  "<<**ptr2<<endl;

  return 0;
}