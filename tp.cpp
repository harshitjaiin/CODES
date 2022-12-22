#include<iostream>
using namespace std;
 int main(){
     int a=5;
     int* b=&a;
     cout<<"the address of a is"<<b<<endl;
     cout<<"the address of a is"<<&a<<endl;
cout<<"the value at address b is"<<a<<endl;
cout<<"the value at address b is"<<*b;
return 0;}