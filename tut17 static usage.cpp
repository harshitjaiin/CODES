#include<iostream>
using namespace std;
int sum(int x,int y)
{
    static int c=0;
    c=c+1;
    int d=x+y+c;
    
}
//            int sum(int x,int y)     this is without static run the code and you'll know the difference
//            {
//                 int c=0;
//                c=c+1;
//                int d=x+y+c;
//                
//            }
 int main(){
     int a=6;
     int b=8;
     cout<<"the ans is"<<sum(a,b)<<endl;
     cout<<"the ans is"<<sum(a,b)<<endl;
     cout<<"the ans is"<<sum(a,b)<<endl;
     
return 0;
}