#include<iostream> 
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
   // Function Objects / Functor : Function wrapped in a class so that it available like an object 
   int arr[] = {54,6,23,9,10,-2};
   sort(arr,arr+6); //This will sort an array in ascending order
    //  sort(arr,arr+6 , greater<int>());//sorting in descending order
  reverse(arr,arr+6);


   for(int i= 0 ; i<6 ; i++)
   {
    cout<<arr[i]<<"  ";
   }
   cout<<endl;
  return 0;
}