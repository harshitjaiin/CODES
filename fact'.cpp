#include<iostream>
using namespace std;
double fact(double n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
    n=n*fact(n-1);
    return n;
    }
}
 int main(){
     int x;
     cout<<"enter the number you want to find factorial of"<<endl;
     cin>>x;
     cout<<"the factorial of "<<x<< " is "<<fact(x);
     
return 0;
}