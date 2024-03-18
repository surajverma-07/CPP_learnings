#include <iostream>

using namespace std;

int main()
{
    // basic example
    int a = 45;
    int *ptr1 = &a;

    cout << "The value of a is  " << *(ptr1) << endl; // derefrence

    // new operator

    // int *p = new int(400);
    float *p = new float(7.777);
    cout << "The value at address p is  " << *(p) << endl;

    int *arrptr = new int[4]; // dynamically allocate memory
    arrptr[0] = 10;
    *(arrptr + 1) = 20;
    arrptr[2] = 30;
    arrptr[3] = 40;
    // delete arrptr;
    // delete[] arrptr;
    cout << "The value of arrptr[0] is  " << arrptr[0] << endl;
    cout << "The value of arrptr[1] is  " << arrptr[1] << endl;
    cout << "The value of arrptr[2] is  " << arrptr[2] << endl;
    cout << "The value of arrptr[3] is  " << arrptr[3] << endl;
    return 0;
}