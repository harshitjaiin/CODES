#include<iostream>
using namespace std;
//isme condition last me check hoti hai thet means ki agr 
//condition sahi na bhi ho toh bhi atleast 1 output aaega 
int main(){
    int i=5;
    do{
        cout<<i<<endl;
        i++;

    }while(i<11);//';'is very necessary here
    //agr yaha while(false) bhi likh doge toh atleast 1 output mil jaega
    return 0;
}