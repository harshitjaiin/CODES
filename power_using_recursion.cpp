#include<iostream>
using namespace std;
long int power(int a,int b){
    long int ans=0;
    if(b==0)
       return 1;
    if(b%2==0){
        cout<<"even"<<endl;
        ans=power(a,b/2)*power(a,b/2);
    }
    else{
        cout<<"odd"<<endl;
       ans= a*power(a,(b-1)/2)*power(a,(b-1)/2);
    }
    return ans;

}
 int main(){
     int a,b;
     cout<<"enter the base value and power value " << endl;
     cin>>a>>b;
     cout<<power(a,b);
return 0;
}