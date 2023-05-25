class Solution {
public:
    int f(int ind,vector<int>& nums,int prev,vector<vector<int>>&dp)
    {
        if(ind==nums.size()) return 0;// if you go to out of index what len you take 0
        int take=0,nott=0;
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        nott=0+f(ind+1,nums,prev,dp);
        if(prev==-1||nums[prev]<nums[ind])
        take=1+f(ind+1,nums,ind,dp); //taking this guy and prev guy is your curr index
        return dp[ind][prev+1]= max(take,nott);
        
          
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
      vector<vector<int>>dp(n,vector<int>(n+1,-1));// how to store prev = -1 so shift 
        return f(0,nums,-1,dp);
    }
};