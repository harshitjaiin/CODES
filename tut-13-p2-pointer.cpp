#include<iostream>
using namespace std;
 int main(){
     int marks[]={34,56,78,2};
     int* p=marks;
     cout<<"the value of 1st no is "<<*(p);
     cout<<endl<<"the value of 2nd no is "<<*(p+1);
     cout<<endl<<"the value of 3rd no is  "<<*(p+2);
     cout<<endl<<"the value of 4th no is "<<*(p+3);

     
return 0;
}