#include <iostream>
using namespace std;

class shop 
{
    int iteamid[50];
    int iteamprice[50];
    int counter;

public :
 void initcounter(void) {counter = 0;}
 void setprice(void);
 void displayprice(void);

};

void shop::setprice(void)
{
    cout<<"enter the id of your item no"<<counter+1 <<end1;
    cin >> iteamid[counter];
    cout << "Enter Price of your item" << endl;
    cin >> iteamprice[counter];
    counter++;

}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}


int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}

