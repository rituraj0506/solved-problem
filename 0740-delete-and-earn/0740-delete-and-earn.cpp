class Solution {
public:
    // same as house robber
    int f(int i,vector<int>&a,vector<int>&dp)
    {
        if(i>=a.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=f(i+2,a,dp)+a[i];
        int nott=f(i+1,a,dp)+0;
        return dp[i]=max(take,nott);
    }
    int deleteAndEarn(vector<int>& nums) {
       vector<int>a(10001,0);// indexing 0 to 10^4; 
        vector<int>dp(10001,-1);
        for(auto it:nums)
        {
            a[it]+=it;
        }
       return f(0,a,dp);
    }
};