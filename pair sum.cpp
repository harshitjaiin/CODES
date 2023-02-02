#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int count=0,i=0,j=n-1;

	while(i<j){
	   
       int sum=arr[i]+arr[j];
	   if(sum==target){

		   count++;
		   i++;
		   j--;
	   }
	   else if(sum>target){
		   
		   j--;
	   }
	   else{
		   i++;
	   }
	}
	if(count>0){
	return count;
	}
	return -1;
}
