#include <iostream>

using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    } // default constructor <----must
    number(int num)
    {
        a = num;
    }
    // When no copy counstructor is found , compiler supply it's own copy constructor
    
    number(number &obj)
    {
        cout<<"\n copy constructor called \n";
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(76), z2;
    z.display();
    x.display();
    y.display();
    number z1(z);// copy constructor invoked 
    z1.display();
    
    z2 = z; // copy constructor not invoked
    z2.display();

    number z3 = z; //copy constructo invoked
    z3.display();
    return 0;
}