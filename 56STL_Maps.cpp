#include<iostream> 
#include<map>
#include<string>

using namespace std;

// Map is an assocoative array
int main()
{    
     map<string,int> marksMap;
     marksMap["suraj"] = 90;
     marksMap["vikas"] = 85;
     marksMap["ojaswat"] = 65;
      
      marksMap.insert({{"deepak" , 45} , {"praveen" , 89}});
      map<string,int> :: iterator iter;
      for(iter = marksMap.begin(); iter != marksMap.end() ; iter++)
      {
        cout<<(*iter).first<<"  "<<(*iter).second<<endl ;
      }
      
      cout<<"The size is : "<<marksMap.size()<<endl;
      cout<<"The max_size is : "<<marksMap.max_size()<<endl;
      cout<<"The empty return the value is : "<<marksMap.empty()<<endl;//Zero means not empty
      
     return 0;
}