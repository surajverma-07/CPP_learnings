//Jay Shree Ram
#include<iostream> 

using namespace std;

template<class T>
class ohm_namah_shivay
{
    public :
    T data;
    ohm_namah_shivay(T a)
    {
        data = a;
    }
    void display();
};
    template <class T>
    void ohm_namah_shivay<T> ::  display()
    {
        cout<<"data is "<<data<<endl;
    }

    void function1(int a)
    {
        cout<<"I am a function1 without template  and  a = "<<a<<endl;
    }

    template <class T>
    void function2(T a)
    // void function1(T a)
    {
        cout<<"I am a function1 with template  and  a = "<<a<<endl;
    }
int main()
{
//     ohm_namah_shivay<int>om(10);
//     cout<<"data = "<<om.data<<endl;

//     ohm_namah_shivay<char>om1('p');
//    om1.display();
     function1(8);//exact match takes the highest priority
    //  function1<char>('M');
     function2("suraj");
  return 0;
}