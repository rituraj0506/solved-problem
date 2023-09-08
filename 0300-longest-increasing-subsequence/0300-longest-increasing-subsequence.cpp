class Solution {
public:
    int f(int prev,int ind,int n,vector<int>& nums, vector<vector<int>>&dp)
    {
        if(ind>=n)
        {
            return 0;
        }
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int nott=0+f(prev,ind+1,n,nums,dp);
        int take=-1e9;
        if(prev==-1||nums[ind]>nums[prev])
           take= 1+f(ind,ind+1,n,nums,dp);
        return dp[ind][prev+1]=max(take,nott);
    }
        
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int prev=-1;
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
       return f(prev,0,n,nums,dp);
        
    }
};