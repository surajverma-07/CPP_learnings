#include <iostream>

using namespace std;

class shop
{
    string name[20];
    int itemid[100];
    int price[20];
    int counter=0;
public:
    // void initcounter()
    // {
    //     counter = 0;
    // }
    void setPrice();
    void displayPrice();
};

void shop ::setPrice()
{
    cout << "\n Enter the id of your item number   " << counter + 1 << "    ";
    cin >> itemid[counter];
    cout << "\n Enter the name of product    ";
    cin >> name[counter];
    cout << "\n Enter Price of your item  ";
    cin >> price[counter];
    counter++;
}
void shop ::displayPrice()
{

    for (int i = 0; i < counter; i++)
    {
        cout << itemid[i] << "\t" << name[i] << "\t" << price[i] << endl;
    }
}
int main()
{
    shop s;
    // s.initcounter();
    int n;
    cout << "\n Enter the number of products   " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s.setPrice();
    }
    cout << "Product ID\tName\tPrice" << endl;
    s.displayPrice();
    return 0;
}