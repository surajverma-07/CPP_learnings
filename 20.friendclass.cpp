 #include<iostream> 
 
 using namespace std;
 // Forward declaration ---> guarunti to compiler that these complex class you get for sure
class complex; 
 class calculator
 {
    public : 
    int add(int a,int b)
    {
        return(a+b);
    }
    int sumrealcomlex(complex ,complex );//function declaration 
    int sumimgcomlex(complex ,complex );//function declaration 
    
 };
 class complex 
 {
    private : 
    int a,b;
    // Individually declaring function as friend
    // friend int calculator :: sumrealcomlex(complex ,complex  ); 
    // friend int calculator :: sumimgcomlex(complex,complex); 

    //Alter: Declaring the entire calculator class as friend
    friend class calculator; 
    public:       
     void setdata(int m, int n)
     {
        a=m;
        b=n;
     }
     void display()
     {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
     }
 };

    int calculator :: sumrealcomlex(complex o1,complex o2)
    {
        return o1.a+o2.a;
    }
    int calculator :: sumimgcomlex(complex o1,complex o2)
    {
        return o1.b+o2.b;
    }

 int main()
 {
    complex o1,o2;
    o1.setdata(1,2);
    o1.display();
    o2.setdata(5,9);
    o2.display();
    calculator calc;
    int res=calc.sumrealcomlex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    int resi=calc.sumimgcomlex(o1,o2);
    cout<<"The sum of imagnary part of o1 and o2 "<<resi<<endl;
   return 0;
 }