// Inheritance in C++
// DRY - Do Not Repeat Yourself
// existing class is called --> Base Class
// new class which is inherited is called as the Derived Class
// single inheritance ,  multiple Inheritance , Hierarchial inheritance , multilevel inheritance , Hybrid inheritance
// Single inheritance --->   A---->B (B is derived from A) a derived class with only one base class
// Multiple inheritance A+B ----> C (one child two father LoL) Derived class with more than one base clas
// Hierarchical inheritence --->  (Two child from single fathe ) Several derived classes from a single base class
// Multilevel Inheritance ---> Deriving a class from already exiting (deriverd) class  A ---> B ---> C (Animal --> memmle --> cow)
// Hybrid inheritance ----> ( Multiple + multilevel ) inheritance

#include <iostream>

using namespace std;

// Base Class
class Employee
{
private:
public:
    int id;
    float salary;
    Employee() {} // default constructor importent
    Employee(int empid)
    {
        id = empid;
        salary = 989;
    }
};

// Deruved Class syntax
/*
   class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
   {
    class members/methods/etc..
   }

   NOTE :
   1. By default visibility mode is private
   2. Public visibility mode ---> public member of the base class becomes public member of the derived class
   3. Private visibility mode ---> public member of the base class becomes private member of the derived class
   4. Private member of the base class never be inherited
*/

// Creating a Programmr class derived from Employee Base Class
class programmer : public Employee
{
public:
    programmer(int empid)
    {
        id = empid;
    }
    int lang_c = 7;
    void getdata()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee deepak(100), prem(101);
    cout << deepak.salary << endl;
    cout << prem.salary << endl;
    programmer suraj(777);
    cout << suraj.lang_c<<endl;
    cout << suraj.id<<endl;
    suraj.getdata();
    return 0;
}