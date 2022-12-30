 vector<vector<int>> merge(vector<vector<int>>& intervals) {
          sort(intervals.begin(),intervals.end());
          vector<vector<int>> ans;

          int i=0,k=0;
          while(i<intervals.size()){
             if(ans.empty()){
                 ans.push_back(intervals[i]);
                 
                 i++;
             }
             else{
                if(intervals[i][0]<=ans[k][1]){
                    vector<int> temp;
                    temp.push_back(ans[k][0]);
                    if(intervals[i][1]>ans[k][1]){
                      temp.push_back(intervals[i][1]);
                    }
                    else{
                        temp.push_back(ans[k][1]);
                    }
                    ans.push_back(temp);
                    ans.erase(ans.begin()+(k));
                    
                    i++;
                }
                else if(intervals[i][0]>=ans[k][1]){
                    ans.push_back(intervals[i]);
                    k++;
                    i++;
                }
                
             }
          }
          return ans;
    }
