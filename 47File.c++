#include<iostream> 
#include<fstream>

using namespace std;


int main()
{
  
  //connecting our file with obj1 stream
  ofstream obj1("46Samplefile.txt");

  //Creating a new string and filling it with the string
  //entered by the user
  string str1;
  cout<<"Enter your name in file  :     ";
  cin>>str1;

  // writing a string to the file 
  obj1<<"My name is "<<str1;
  
  //
  obj1.close();

  ifstream obj2("46Samplefile.txt");
  cout<<"\nReading from the file  : \n";
  string str2;    
//   obj2>>str2;
   getline(obj2,str2);
  cout<<endl<<"The content of this file is : "<<str2<<endl;
  obj2.close();
  return 0;
}