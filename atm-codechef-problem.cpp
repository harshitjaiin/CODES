#include<iostream>
using namespace std;
 int main()
 {
     float ibal;
     int wdl;
     cout<<"hello puja"<<endl;
     cout<<"please enter the current balance amount in your account"<<endl;
     cin>>ibal;
     cout<<"please enter the amount you wish to withdraw"<<endl;
     cin>>wdl;
     if(wdl>0 && wdl%5==0.00 &&wdl<ibal)
     {cout<<"your transaction is successful and the current balance in your account is"<<endl;
    cout<<(ibal-wdl-0.50)<<endl;
     }
     else if(wdl<0)
     {
         cout<<"please enter a valid withdrawal amount"<<endl;

     }
     else if(wdl>ibal)
     {
         cout<<"you don't have enough money in your account to withdraw and your current balance is "<<ibal<<endl;

     }
else if(wdl%5!=0){
    cout<<"the amount you can withdraw should be a multiple of 5"<<endl;

}

return 0;
}