#include<iostream> 
#include<fstream>

using namespace std;

int main()
{
        //  ofstream out("46Samplefile.txt");
           ofstream out;
           out.open("46Samplefile.txt");
           out<<"Mere baccho ! \n maine tumse kaha tha ";
           out<<"let's nacho "; 
           out.close();

          ifstream in;
          string str;
          in.open("46Samplefile.txt");
        //   in>>str;
        // getline(in,str);
        //   cout<<str<<endl;

     while(in.eof()  == '\0' )
     {
        getline(in,str);
        cout<<str<<endl;
     }

  return 0;
}