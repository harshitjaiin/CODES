class Solution {
private:
 void solve(string digits,int index,string reference[],vector<string>& ans,string output){
        //base case
        if(index>=digits.length()){
             ans.push_back(output);
             return;
        }
        int focus=digits[index]-'0';
        string value=reference[focus-2];
        for(int i=0;i<value.length();i++){ 
            //include
            output.push_back(value[i]);
            solve(digits,index+1,reference,ans,output);
            output.pop_back();

        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        string reference [8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        string output;
        solve(digits,0,reference,ans,output);
        return ans;
    }
};
