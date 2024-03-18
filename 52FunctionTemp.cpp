#include<iostream> 

using namespace std;
// float funcAverage(int a, int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage1(int a, float b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1 , class T2>
float funcAverage1(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a , T &b)
{
  T temp = a;
     a = b;
     b = temp;
}
int main()
{
    float avg = funcAverage1(5.4,6.90);
    cout<<"avarage is  "<<avg;
    // printf("avarage of numbers is  %f \n",funcAverage(3,2));
    // printf("\navarage of numbers is  %f \n",funcAverage1(4,2.34));
    
    float a = 2.3;
    float b = 45;
    swapp(a,b);
    cout<<"\na   =   "<<a<<endl;
    cout<<"b   =   "<<b<<endl;

  return 0;
}