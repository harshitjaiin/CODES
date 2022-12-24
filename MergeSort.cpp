#include<iostream>
using namespace std;
void merge(int a[], int l, int m, int r)
    {
         // Your code here
         int i,j,k;
         int n1=m-l+1;
         int n2=r-m;
          
         int * left=new int[n1];
         int * right=new int[n2];
         
         for(int i=0;i<n1;i++){
             left[i]=a[l+i];
         }
         for(int j=0;j<n2;j++){
             right[j]=a[m+1+j];
         }
         i=0;
         j=0;
         k=l;
        while (i < n1 && j < n2){    
        if(left[i] <= right[j])    
        {    
            a[k] = left[i];    
            i++;    
        }    
        else    
        {    
            a[k] = right[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = left[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = right[j];    
        j++;    
        k++;    
     }
     delete [] left;
     delete [] right;
    }
    
    void mergeSort(int arr[], int l, int r)
    {    
        if(l>=r){
         return ;
        }
        
        int mid=l+(r-l)/2;
        
        mergeSort(arr, l,mid);
        
        mergeSort(arr, mid+1,r);
        
        merge(arr,l,mid,r);
    }
 int main(){
     int a[5]={4 ,1  ,3, 9, 7};
     mergeSort(a,0,5);
     for(int i=0;i<5;i++)
      cout<<a[i]<<" ";
return 0;
}