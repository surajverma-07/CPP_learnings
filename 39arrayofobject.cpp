#include<iostream> 

using namespace std;

class ShopItem
{
   int id;
   float price;
   string name;
   public:
   void setData(string ch,int a,float b)
   {
     name = ch;
     id = a;
     price = b;
   }
   void getData()
   {
    cout<<"Product Name is  "<<name<<endl;
    cout<<"Product id is  "<<id<<endl;
    cout<<"Product price is  "<<price<<" rs \n"<<endl;
   }
};
int main()
{
    int size;
    cout<<"Enter the number of ShopItemItems   :   ";
    cin>>size;
    // Items ---> 1. Tomato 2.Potato  3. Chilly 
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptr_copy = ptr;
    int p;
    float q;
    string r;
    for (int i = 0; i < size; i++)
    {
       cout<<"Enter Product name ,  id  and  price of  item "<<i+1<<endl; 
       cin>>r>>p>>q;
    //  (*ptr).setData(p,q);
      ptr ->setData(r,p,q);
      ptr++;//to set data of diffrent product

         }
    for (int i = 0; i < size; i++)
    {
        ptr_copy ->getData();
        ptr_copy++;
    }
    


  return 0;
}