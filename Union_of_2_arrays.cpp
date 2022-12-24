#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {
    //for this instead of a vector you can use a set data-structure 
    //set data structure stores only unique values that to in a sorted order
    //both have been shown in this piece
        vector<int> ans;
        int count=0;
        for(int i=0;i<n;i++){
            ans.push_back(a[i]);
        }
        for(int i=0;i<m;i++){
            ans.push_back(b[i]);
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<m+n;i++){
            if(ans[i]==ans[i+1]){
                count++;
            }
           
        }
     return(m+n-count);
      }
int doUnionSet(int a[], int n, int b[], int m)  {
    //for this instead of a vector you can use a set data-structure 
    //set data structure stores only unique values that to in a sorted order
        set <int> ans;
        int count=0;
        for(int i=0;i<n;i++){
            ans.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            ans.insert(b[i]);
        }
        
     return(ans.size());
      }
 int main(){
     int a[5]={1,2,3,4,5};
     int b[3]={5,1,3};
    cout<< doUnion(a,5,b,3)<<endl;
    cout<< doUnionSet(a,5,b,3);
return 0;
}