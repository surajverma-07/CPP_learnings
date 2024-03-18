#include<iostream> 
#include<cstring>
using namespace std;

template <class t1 = int ,class t2 = char , class t3 = float >
class suraj 
{
  public:
  t1  num1;
  t2  num2;
  t3  num3;
  suraj(t1 x , t2 y , t3 z){
      num1 = x;
      num2 = y ;
      num3 = z;
  };
  void display()
  {
    cout<<"my favourate number is "<<num1<<endl;
    cout<<"number 2  is  "<<num2<<endl;
    cout<<"number 3  is  "<<num3<<endl;
  }
};
int main()
{
    suraj<>s1(7,'s',9.3);
     s1.display();
     cout<<"\n\n";
      
      suraj<float,int , char>s2(2.221,4,'m');
      s2.display();
  return 0;
}