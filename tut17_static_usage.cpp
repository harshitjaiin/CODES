#include<iostream>
#include<string.h>
using namespace std;
inline int sum(int x,int y){
    return (x+y);
}
// class student{
//     int rno;
//     public:
//     student(){
//         cout<<" you are in constructor " << endl;
        
//         rno=5;
//         name="jian ";
//     }
//     student(){
//         cout<<" you are in constructor " << endl;
//         rno=5;
//         name="jian ";
//     }
//     ~student(){
//         cout<<" object deleted " << endl;
//     }
//     void getData();
//     void ShowData();
//     string name;
// };
//  void student :: getData(){
//     cout<<" enter rno " << endl;
//     cin>>rno;
//    // cout<<" enter the name " << endl;
//     //cin>>name;
//  }
//  void student :: ShowData(){
//     cout<<"rno" << endl;
//     cout<<rno<<endl;
//     cout<<"name " << endl;
//     cout<<(name);
//  }
 int main(){

    int a=5;
    int b=8;
    int c=sum(a,b);
    cout<<c;
     //student s,r,t;
    // s.name="jain";
    // s.getData();
    //s.ShowData();
return 0;
}