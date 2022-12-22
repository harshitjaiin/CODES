#include<iostream>
using namespace std;
 int main(){
     int i;
     for(i=1;i<100;i++)
   //  {
     //    cout<<i<<endl;
     //    if(i==4)
//ye bich me hi loop se bhr nikal dega usko
     //    {break;
     //    }
     //}
     {if(i==95)
         {
             continue;//mtlb jaisi i=95 hoga ye usko skipiyan dega!also isme continue statement ko phele likhna pdega
             //than cout statement coz agr ulta kiye toh phele 95 print hone k bad usko pata chalega ki 95 print nhi 
             //KARNA THA
            
         }
         cout<<i<<endl;
         
     }
return 0;
}
