#include<iostream>
using namespace std;
void SelectionSort(int arr[],int beginIndex,int endIndex){
    if(beginIndex==endIndex)
     return ;
    int minIndex=beginIndex;
    for(int i=beginIndex;i<=endIndex;i++){
        if(arr[minIndex]>arr[i])
         minIndex=i;
    }
    swap(arr[beginIndex],arr[minIndex]);
    SelectionSort(arr,beginIndex+1,endIndex);
}
 int main(){
    int a[5]={5,4,6,8,1};

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> a[i];
    // }

    SelectionSort(a,0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
return 0;
}