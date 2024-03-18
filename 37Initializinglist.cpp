#include <iostream>

using namespace std;

/*
  syntax for Initialization list in constructor :
  constructor (argument_list) : Initialization_section
  {
    assignment + other_code;
  }
*/
class hero
{
private:
    // int a, b, v;
    int a;
    int v;
    int b;

public:
    // hero(int i, int j, int k) : a(i), b(j), v(a+b+k)
    //   hero(int i, int j, int k) : a(i), b(v), v(k) //Garbage value bcz b declared first
    //so b is initialized first
    // hero(int i,int j , int k) : a(i) , b (v) , v(k)//it's work if v declared first
    // hero(int i,int j , int k) : v(a),a(i),b(v)//here order is not matter 
    hero(int i,int j ,int k) : v(k)
    {
        a=i;
        b=j;
        cout << "Constructor executed " << endl;
        cout<<" The value of a is "<<a<<endl;
        cout<<" The value of b is "<<b<<endl;
        cout<<" The value of v is "<<v<<endl;
    }
};
int main()
{
    hero h1(1,2,3);

    return 0;
}