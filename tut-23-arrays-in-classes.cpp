#include<iostream>
using namespace std;
class Shop{
    int itemId[100];
    int itemPrice[100];
    int count;
    public:
    int x{count=0};
    void getPrice(void);
    void dispPrice(void);
   };
   void Shop :: getPrice(void)
   {
       cout<<"enter the item id of the product you want to buy"<<endl;
       cin>>itemId[count];
       cout<<"enter the price of the product you want to buy"<<endl;
       cin>>itemPrice[count];
       count++;
   }
   void Shop :: dispPrice(void)
   {
       for(int i=0;i<count;i++)
       {
           cout<<"the price of the product with item ID " <<itemId[i]<<" is "<<itemPrice[i]<<endl;
       }
   }
 int main(){ int n;
     Shop ramu;
     cout<<"please enter the number of items you want to purchase"<<endl;
     cin>>n;
     for(int j=0;j<n;j++)
     {
     ramu.getPrice();
     ramu.dispPrice();
     }
return 0;
}