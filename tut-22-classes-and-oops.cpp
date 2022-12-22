#include <iostream>
#include <string>
using namespace std;
class binary 
{
    string s;

public:
    void read(void);
    void check_bin(void); /*agr isko private bana dete to main se call ni kr skte sirf isko class k function
    se hi call krna possible hota */                      
    void swap(void);
    void show(void);
};
void binary :: read(void)
{
    cout << "please enter the binary number" << endl;
    cin >>s;
}
void binary :: check_bin(void)
{
    for (int i = 0; i<s.length(); i++)   //s.length is a fn so () Lgana mt bhulna
    {
        if ((s.at(i)!='0') && (s.at(i)!='1'))
        {
            cout << "the number you entered is not a binary number" << endl;
            exit(0);
        }
    }
}    
void binary :: swap(void)
 {
   for (int j = 0; j<s.length(); j++) 
   {
       if(s.at(j)=='0')
       {
           s.at(j)='1';
       }
       else if(s.at(j)=='1')
       {
           s.at(j)='0';
       }
   }
   
 }   
void binary :: show(void)
{
     for (int j = 0; j<s.length(); j++)
     {
     cout<<s.at(j);
     }
    cout<< endl;
}
    int main()
    {
       binary jain;
        jain.read();
        jain.check_bin();
        jain.show();
        jain.swap();
        jain.show();
        return 0;
    }