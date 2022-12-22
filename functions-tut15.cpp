#include<iostream>
using namespace std; 
 void g();                         //this is known as function prototyping
int sum(int a,int b) ;//iska mtlb compiler ko phele se bata diye ki sum naam ka koi fn milega tujhe
 //agr usko nhi btate aur agr main k bad apn sum likhe hai to not declared in scope ata
 int main(){           //upr jo likha h uske jagah ye bhi chalega int sum(int ,int ) would do it too              
     int num1,num2;
     cout<<"enter the first number"<<endl;
     cin>>num1;
     cout<<"enter the second number"<<endl;
     cin>>num2;
    cout<<"the sum is "<<sum(num1,num2);
g();    //upr agr isko declare nhi krte phele void g krke toh not delcared in scope ajata

return 0;
}
 int sum(int a,int b){
    int c=a+b;
 return c;
}
void g()
{
    cout<<endl<<"hello friends chai peelo";
}