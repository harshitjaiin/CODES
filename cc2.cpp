#include<iostream>
using namespace std;
 int main(){int n;
     int i=0;
     cout<<"enter the number of digits you would like to give as input(less than 101)"<<endl;
     cin>>n;
     int marks[n];
     int count =0;
     for(i=0;i<n;i++)
     {
       cout<<"enter the number "<<i+1<<" values"<<endl;
       cin>>marks[i];
    }
    for(int z=0;z<n;z++)
    {
        marks[z]=marks[z]%10;
        if (marks[z]=4)
        {
        count++;

        }
        cout<<count;
    }
     
return 0;
}