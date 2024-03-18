#include<iostream> 
#include<cmath>

using namespace std;

class point
{
   int x,y;
   public:
   point(int a,int b);
   void display();
   friend void distance(point , point);
};
point :: point(int a,int b)
{
    x=a;
    y=b;
}
 void point :: display()
{
    static int p=1;
    cout<<"\n point "<<p<<"is   ( "<<x<<" , "<<y<<" )\n";
    p++;
}
 void distance(point p1, point p2)
 {
    int m= ((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y));
    cout<<"\n distance beetween point 1 and point 2 is   "<<sqrt(m)<<endl;
 }
int main()
{
    int x1,x2,y1,y2;
    cout<<"\n Enter quardinates of point 1  (x1,y1)  ";
    cin>>x1>>y1;
    point p1(x1,y1);
    p1.display();

    cout<<"\n Enter quardinates of point 2  (x2,y2)  ";
    cin>>x2>>y2;
    point p2(x2,y2);
    p2.display();

    distance(p1,p2);
  return 0;
}