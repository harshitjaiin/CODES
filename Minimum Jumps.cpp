#include<vector>
int minimumJumps(vector<int> &arr, int n)
{   
    if(n==1){
        return 0;
    }
    if(arr[0]==0){
        return -1;
    }
    int maxR=arr[0];
    int step=arr[0];
    int jumps=1;
    
    for(int i=1;i<n;i++){
         if(i==n-1&&step){
            return jumps;
        }

        maxR=max(maxR,i+arr[i]);
        step--;
        if(step<0){
            return -1;
        }

        if(step==0){
           jumps++;
           if(i>maxR){
               return -1;
           }
           step=maxR-i;
        
        }
    }
    


}
