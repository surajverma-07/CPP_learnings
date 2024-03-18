#include<iostream> 
#include<fstream>

// The usefull classes for working with files in C++ are : 
// 1. fstreambase
// 2. ifstream ---> derived from fstreambase 
// 3. ofstream ---> derived from fstreambase

/*
  IN order to work with files in C++ , you will have to open it. 
  Primarily , there are to ways to open a file 
  
  1.Using the constructor.
  2.Using the member function open() of the class

*/
using namespace std;

int main()
{
    //opening file using constructor and writing on it
     string text = " HAR HAR MAHADEV ";
        ofstream out("46Samplefile.txt");//out is object of class ofstream
    out<<text;
  
    opening file using constructor and reading from it

    // string txt_read; 
    ifstream input("46Samplefile2.txt");//Read operation
        // input>>txt_read;
    getline(input,txt_read);//getline(object_name , string_name)
    getline(input,txt_read);//it's only show text of single line only
    
    cout<<txt_read<<endl;
  return 0;
}