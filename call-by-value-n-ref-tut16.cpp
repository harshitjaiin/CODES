#include <stdio.h>
#include<iostream>
using namespace std;
int main() 
{
   int x;
   scanf("%d",&x);
   while(x--)
   {
       int n;
       scanf("%d",&n);
       int a,count=0;
       while(n>0)
       {  
           a=n%10;
           n/=10;
           if(a==4)
               count++; 
         
       }
           printf("%d",count);
   }
	return 0;
}