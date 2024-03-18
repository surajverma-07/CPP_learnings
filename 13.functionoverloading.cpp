#include<iostream> 

using namespace std;

//overloaded function ---> multiple function of same name 


//volume of cube
int volume(int a )
{
    return (a*a*a);
}


//volume of cubide

int volume(int l,int b,int h)
{
   return (l*b*h);
}
 
//volume of cylinder
float volume(float r,float h )
{
   return (3.14*r*r*h);
}

//volumee of sphere
// int volume(int r)
// {
//      return((4/3)*3.14*r*r*r);
// } //functio can't be repeat having same name and same number of variable 

int main()
{
    cout<<"\n volume of a cube of 4 is  "<<volume(4)<<endl;
    cout<<"\n volume of a cubide of 4,5,6 is  "<<volume(4,5,6)<<endl;
    cout<<"\n volume of a cylinder of 4.34radius and 5height  is  "<<volume(4.
    4,5)<<endl;
    // cout<<"\n volume of a sphere of 4radius is  "<<volume(4)<<endl;
  return 0;
}