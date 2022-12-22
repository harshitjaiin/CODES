#include<iostream>
using namespace std;
 int main(){
     int marks[5];int j=0;
     for(int i=0;i<5;i++)
{
     cout<<"please enter the marks of student "<<(i+1)<<endl;
     cin>>marks[i];
     }
     
     for(j=0;j<5;j++)
     {cout<<"the marks of student"<<(j+1)<<"are"<<endl;
         cout<<marks[j]<<endl;
     }j++;
return 0;
}