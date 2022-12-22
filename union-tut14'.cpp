#include<iostream>       //this  example is based on a village where people dont have much cash instead they
using namespace std; //use barter system keep that in mind
union firm
{         //union is similar to the structue but this provies a better memory management
    int rice;  //yaha ek bar me ek hi variable ko use kr sakte h jo datatype sbse zyada memory lera hoga
    float cash;//ye uske jitni memory ko alag rkh dega taki usi se sbka kaam chl jaaye
    char favcar;

};
 int main(){
    union firm tinu;
     tinu.cash=99.99;
     cout<<:"he has "<<tinu.cash<<endl;
return 0;
}