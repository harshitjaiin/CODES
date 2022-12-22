#include<iostream>
using namespace std;
typedef struct employee //typedef use kia hu yahan
{
    int eId;
    float salary;
    char favc;

} hx;
 int main(){
     hx harshit; //instead of using employee again n again we can now use hx in place of that
    cout<<"enter the workers id number"<<endl; 
cin>>harshit.eId;
cout<<"enter the workers salary"<<endl;
cin>>harshit.salary;
cout<<"enter the workers favourite character"<<endl;
cin>>harshit.favc;

cout<<"the workers salary is "<<harshit.salary<<endl;
cout<<"the workers employee id is "<<harshit.eId<<endl;
cout<<"the workers fav character is "<<harshit.favc<<endl;
return 0;
}