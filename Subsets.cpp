#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> subsets(vector<int> nums){
    int size=nums.size();
    vector<vector<int>> ans;
     
    ans.push_back({});

    for(int i=0;i<size;i++){
        int sz=ans.size();
        for(int j=0;j<sz;j++){
            vector<int> temp=ans[j];
            temp.push_back(nums[i]);
            ans.push_back(temp);
        }
    }
    return ans;
}
 int main(){
     vector<int> nums{1,2,3,4};
     vector<vector<int>> ans=subsets(nums);
     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }
return 0;
}