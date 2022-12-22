#include<iostream>
using namespace std;
int k;
float u,v,w;
float volume (int x,int y,int z)
{
    return int v=x*y*z;
}
float volume (float x,float y)
{
    return float v =3.14*x*x*y;
}
float volume (float x)
{
    return float v=x*x*x;
}
 int main(){
     cout<<"please choose the type of figure you want to find volume of"<<endl;
     cout<<"please choose 1 for cube"<<endl;
     cout<<"please choose 2 for cuboid"<<endl;
     cout<<"please choose 1 for cylinder"<<endl;
     cin>>k;
     if(k==1)
     {
         cout<<"please enter the length of side of cube "<<endl;
         cin>>u;
         cout<<"the volume is "<<volume(u)<<endl;

     }
     if(k==2)
      {
         cout<<"please enter the length of side of cuboid "<<endl;
         cin>>u;
         cout<<"please enter the breadth of side of cuboid "<<endl;
         cin>>v;
         cout<<"please enter the height of side of cuboid "<<endl;
         cin>>w;
         cout<<"the volume is "<<volume(u,v,w)<<endl;

     }
     if(k==2)
      {
         cout<<"please enter radius of cylinder "<<endl;
         cin>>u;
         cout<<"please enter the height of cylinder "<<endl;
         cin>>v;
         cout<<"the volume is "<<volume(u,v)<<endl;
     }
     else{
         cout<<"please enter a valid input"<<endl;
     }
     
return 0;
}