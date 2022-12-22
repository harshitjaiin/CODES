#include<iostream>
using namespace std;
     void swap(int a,int b) //this won't work since the actual parameters ki copy hui thi yha values not their ADDRESS 
                           //so any change in copies won't affect the og file
     {
         int temp;
         temp=a;
         a=b;
         b=temp;
     }
     void swapPointer(int* p,int* q) //this will work as the address were passed not copies so any change 
                                        //here will definately be reflected in og file
     {
         int* swap=p;
         *p=*q;
         *q=*swap;
     }
      int main(){
     int x,y;
     x=5;y=10;
     cout<<"the value of x b4 swapping is "<<x<<" the value of y b4 swapping is "<<y<<endl;
      swap(x,y);
     cout<<"the value of x af fake  swapping is "<<x<<" the value of y af fake  swapping is "<<y<<endl;
     swapPointer(&x,&y);
     cout<<"the value of x af og swapping is "<<x<<" the value of y af og swapping is "<<y<<endl;


return 0;
}