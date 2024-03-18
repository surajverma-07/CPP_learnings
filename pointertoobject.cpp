#include<iostream> 

using namespace std;

class complex 
{
  private:
  int real , imaginary;
  public:
  void setdata(int a, int b)
  {
    real = a;
    imaginary = b;
  }
  void getdata()
  {
    cout<<"The complex number is  "<<real<<" + "<<imaginary<<"i"<<endl;
  }

};
int main()
{
    // complex c;
    // c.setdata(23 , 53);
    // c.getdata();
    
    // pointer to object
    // complex *ptr1 = &c;

    complex *ptr1 = new complex;
    complex *ptr2 = new complex;
    (*ptr1).setdata(34,66);
    (*ptr1).getdata();//parantheses are imp.
    (*ptr2).setdata(98,34);
    (*ptr2).getdata();

    //Arrow Operator ->
    ptr1 -> setdata(56,34);//setdata member of object which is pointed by ptr
    ptr1 -> getdata();

    // Array of objects
    complex *ptr3 = new complex[5];
    ptr3 ->setdata(10,20);
    ptr3 -> getdata();

    (ptr3+1) -> setdata(55,88);
    (*(ptr3+1)).getdata();
    (ptr3+4) ->getdata(); 
    (ptr3+3) ->getdata(); 
  return 0;
}