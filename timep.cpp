#include<iostream>
using namespace std;
class animals{
    private:
    int typ,no;
    
    public:
    int x;
    void setData(int a1,int b1);
    void getData()
    {
cout<<"the value of type of animal is "<<typ<<endl;
cout<<"the value of number is "<<no<<endl;
cout<<"the value of x is "<<x<<endl;      
    }
};
void animals :: setData(int a1,int b1)
{
  typ=a1;
    no=b1;
}
 int main(){
 animals kush;
kush.x=8;
kush.setData(55,4);
kush.getData();
     
return 0;
}