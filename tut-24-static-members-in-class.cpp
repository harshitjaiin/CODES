#include<iostream>
using namespace std;
class office
{
    int eID;
    static int count; /* This variable is also called class variables and is the properrty of class rather than
    an object and agr kisi 1 object k liye uski kch value hui to next k lie bhi wahi se start hogi .ALSO THE 
    DEFAULT VALUE FOR THIS IS 0 */
    public: 
    void getData(void);
    void DispData(void);
    void getc(void);
};
void office :: getData(void)
{
    cout<<"enter the employee ID for employee "<<count<<endl;
    cin>>eID;
    count++;
}
void office :: DispData(void)
{
    cout<<"The employee no "<<count<<" has employee id number "<<eID<<endl;
}
static void getc(void) //this is a static function and can access only static variables
{                     //ie cout<<eID; will be an error here
    cout<<"the value of count is "<<count<<endl;
}
int office::count;    /*has to be declared outside the class too... also agr kisi aur value se initialse karna
hai kisi static variable ko toh yaha kr sakte h but upr krne se syntax error aayega*/


 int main()
 {
 office tinu,gaurish;
 tinu.getData();
 tinu.DispData();
 office::getc();

 gaurish.getData();
 gaurish.DispData();
 office::getc();
     
return 0;
}