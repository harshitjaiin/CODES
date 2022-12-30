int maxSubStr(string str){
        //Write your code here
        int count0=0;
        int count1=0,counter=0;
        int ans=0;
        
        for(int i=0;i<str.length();i++){
            
            if(str[i]=='1'){
                count1++;
               // cout<<"count1 "<<count1<<endl;
            }
            else if(str[i]=='0'){
                count0++;
               // cout<<"count0 "<<count0<<endl;
            }
            
            if(count1==count0){
                counter=counter+count1+count0;
                ans++;
                //cout<<"ans "<<ans<<endl;
                count1=0;
                count0=0; 
                
            }
        }
        if(counter==str.length())
          return ans;
        else
          return -1;
}
