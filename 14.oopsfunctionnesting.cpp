// OOP's --> Classes and objects
// C++ ---> initially called --> C with classes by stroustroup
// class ---> extension of structures (in C)
// structure had limitation
//      ---> members are public
//       ---> no methods
// classes ---> structures + more
// clsses ---> can have methods and properties
// classes ---> can make few member as private & few as public
// structure in c++ are typedef autometically
// you can declare declare objects along with the class declaration like this :
/*class employee
 {
class definition
 }rohan,rahul,prem; */
// rohan.salary = 439423840; makes no sense if salary is declared privet in class

// Nesting of member function
#include <iostream>
#include <cstring>
using namespace std;

class binary
{ // private :   by default members of class private
    string s;

public:
    void checkbin();
    void read();
    void change();
    void display();
};
void binary ::read()
{

    cout << "Enter a Binary number   ";
    cin >> s;
}
void binary ::checkbin()
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "\n Encorrect binary format";
            exit(0);
        }
    }
}
void binary ::change()
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    cout << "\n Binary is  =   " << s;
}
int main()
{
    binary b;
    b.read();
    b.checkbin();
    b.display();
    b.change();
    b.display();
}