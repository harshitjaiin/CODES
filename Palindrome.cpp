#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter a number"<<endl;
cin>>n;
int rev=0;
do
{ 
   int r=n%10;
	n=n/10;
	rev=(rev*10)+(r);
}while(n>0);
cout<<rev;
cout<<n;
if(rev==n)
{
	cout<<endl<<"palindrome";

}
else
cout<<endl<<"not a palindrome";
return 0;
}