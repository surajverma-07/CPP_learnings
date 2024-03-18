#include<iostream> 
#include<list>

using namespace std;

void display(list<int> &list1)
{
    list<int> :: iterator iter;
    for (iter = list1.begin(); iter != list1.end() ; iter++)
    {
        cout<<*iter<<"  ";
    }
    cout<<endl;
    
}

int main()
{
    list<int> list1; // List of 0 length
    list1.push_back(19);
    list1.push_back(92);
    list1.push_back(1);
    list1.push_back(26);
    list1.push_back(16);
    list1.push_back(26);
    list1.push_back(2);
       display(list1);
//removing element from the list
    // list1.pop_back();
    //    display(list1);

    //    list1.pop_front();
    //    display(list1);

    //    list1.remove(26);//this can remove digit 26 from list
    //    display(list1);

// sorting the list
    // list1.sort();
    // display(list1);

    list<int> list2(4); // Empty list of size 4
    list<int> :: iterator iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 15;
    iter++;
    *iter = 4;
    iter++;
    *iter = 40;
                                                                                                                                         
 display(list2);
//   list2.sort();

//   display(list2);

// merge the list 
//   cout<<"\nList 1 after merging\n";  
//   list1.merge(list2);
//   display(list1);

 // Reversing the list 
//  list1.reverse();
//  display(list1);

 //swaping
 list1.swap(list2); 
    display(list1);//this will show list2 element because of swapping
    list2.sort();
    display(list2); 
    return 0;
}