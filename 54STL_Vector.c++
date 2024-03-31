
/*
  STL ---> Standard Template Library 
  Library of Genric Classes and function 

  why STL ? 
  --> Reuse well tested components
  --> Time Saving
  --> It's used because it's good idea not to Reinvent the wheel 

  Componants of STL
     1. Containers ---> Store data , use template classes
     2. Algorithms ---> sorting , searching , use template function 
     3. Inrators ---> Inrators are Object points to an element in a container 
                 ---> Handled just like pointer 
                 ---> conect Algorithms with containers 

*/
// vector -->       link https://cplusplus.com/reference/vector/vector/

#include<iostream> 
#include<vector>

using namespace std;

template<class T>
void display(vector<T> &vec)
{
  for (int i = 0; i < vec.size(); i++)
  {
     cout<<"displayint vector\n";
     cout<<vec[i]<<"\t";
  }
  cout<<"\n";
}
int main()
{
  // ** Ways to create a vector **
    vector<float> vec1;//zero length float vector

    // float element;
    vector<char> vec3(4); // 4-element character vector
    vector<char> vec4(vec3); // 4-element character vector from vec2
    vector<int> v(6,3); // 6-element vector of 3s
    vector<int> vec2;
    // vec2.push_back(5);
     display(v);
    int element;
    int size;
    // cout<<"Enter the size of vector :     ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //   cout<<"\nEnter the element number "<<i+1<<"\t";
    //   cin>>element;
    //   // vec1.push_back(element);
    //   vec2.push_back(element);
    // }
    // display<float>(vec1);
    // vec2.pop_back();//remove last element
     display<int>(vec2);

    //  vector<int> :: iterator iter = vec2.begin();
    //  vec2.insert(iter, 787);
    //  display<int>(vec2);

    //  vector<int> :: iterator iter2 = vec2.begin();
    //  vec2.insert(iter2+1,454);
    //  display<int>(vec2);

    //  vector<int> :: iterator iter3 = vec2.begin();
    //  vec2.insert(iter2+3,50,7);//insert 50 copy of number(7)
    //  display<int>(vec2);

    // cout<<vec2.at(3)<<endl;//at is used to get element from vector from specific position
   cout<<v.size();
    
  return 0;
}