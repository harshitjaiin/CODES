#include<iostream>
using namespace std;
//strcture is used jab hm ek aise user defined data type bnnana chahte hai 
//which consists of entities of different types of data types
 struct jainfirm
     {
         int EId;
         float salary;
         char depname;
    
     };
 int main(){
    
     struct jainfirm kunal;
     kunal.EId=12;
     kunal.depname='c';
     kunal.salary=14500.45;
     struct jainfirm trishit;
     trishit.salary=1350;
     trishit.EId=4;
     trishit.depname='d';
     cout<<"details for worker tanwar is "<<trishit.salary<<endl;
     cout<<"details for worker tanwar is "<<trishit.EId<<endl;
     cout<<"details for worker tanwar is "<<trishit.depname<<endl<<endl;

     cout<<"details for worker kushagarr is "<<kunal.salary<<endl;
     cout<<"details for worker kushagarr is "<<kunal.EId<<endl;
     cout<<"details for worker kushagarr is "<<kunal.depname<<endl;

return 0;
}