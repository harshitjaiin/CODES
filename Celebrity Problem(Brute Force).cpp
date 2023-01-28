
class Solution 
{   
    int checkRow(vector<vector<int>>M , int row,int n){
    
    for(int i=0;i<n;i++){
        if(M[row][i]==1){
            return -1;
        }
    }
    return row;
}
    int checkCol(vector<vector<int>>M , int col,int n){
    
    for(int i=0;i<n;i++){
        if(i!=col && M[i][col]==0){
            return -1;
        }
    }
    return 1;
}
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {  
        
        for(int i=0;i<n;i++){
               int celeb=checkRow(M,i,n);
               if(celeb!=-1){
                  if(checkCol(M,celeb,n)==1){
                      return celeb;
                  }
               }
        }
        return -1;
    }
};
