#include<iostream> 

using namespace std;

class simple
{
    int data1,data2,data3;
    public:
    simple(int a , int b,int c);
    void display();
};
simple :: simple(int a=86,int b=87,int c=88)
{
    data1 = a;
    data2 = b;
    data3 = c;
}
void simple :: display()
{
    cout<<"\n Data 1 , Data 2 and Data 3 is  "<<data1<<" , "<<data2<<" and "<<data3<<endl;
}
int main()
{
    //simple s1(34,64); // by this data 2 becomes  64
    simple s1(34);//by this data 2 is by default 87 
    s1.display();

  return 0;
}