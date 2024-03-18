#include<iostream> 
#include<cstring>
using namespace std;

// Templets
/*
Class --> object 
template --> class 
template are known as parameterized classes 

why use templates? 
---> DRY principal (Do not repeat yourself) 
---> Genric Programming (use in genral term)
*/
template <class T>
class vector
{
  int size;
  public:
  T *arr;
   vector(int s)
  {
    size = s;
    arr = new T[size];
  }
  int DotProduct(vector &v)
  {
    T d=0;
    for(int i = 0 ; i< size ; i++)
    {
       d+= this->arr[i] * v.arr[i];
    }
    return d;
  } 
};
int main()
{
    vector <float>v1(3); 
    v1.arr[0] = 4.9f;
    v1.arr[1] =3.78f;
    v1.arr[2] = 9.4f;

    vector <float>v2(3);
    v2.arr[0] = 2.98f;
    v2.arr[1] = 1.34f;
    v2.arr[2] = 1.9f;

    float ans = v1.DotProduct(v2);
    cout<<"\n solution is "<<ans<<endl;
  return 0;
}