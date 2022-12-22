#include<iostream>
using namespace std;
void BubbleSort(int * arr, int size){
    if(size==1)
     return;
    for(int i=0;i<size-1;i++){     //is for loop se largest element last pe chale jayega 
        if(arr[i]>arr[i+1]){       
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,size-1);      //ab array ko ek size kam ki bata dena aur firse woi hojaega
}
 int main(){
     int arr[5]={2,5,3,7,1};
     BubbleSort(arr,5);

     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
     }
return 0;
}
