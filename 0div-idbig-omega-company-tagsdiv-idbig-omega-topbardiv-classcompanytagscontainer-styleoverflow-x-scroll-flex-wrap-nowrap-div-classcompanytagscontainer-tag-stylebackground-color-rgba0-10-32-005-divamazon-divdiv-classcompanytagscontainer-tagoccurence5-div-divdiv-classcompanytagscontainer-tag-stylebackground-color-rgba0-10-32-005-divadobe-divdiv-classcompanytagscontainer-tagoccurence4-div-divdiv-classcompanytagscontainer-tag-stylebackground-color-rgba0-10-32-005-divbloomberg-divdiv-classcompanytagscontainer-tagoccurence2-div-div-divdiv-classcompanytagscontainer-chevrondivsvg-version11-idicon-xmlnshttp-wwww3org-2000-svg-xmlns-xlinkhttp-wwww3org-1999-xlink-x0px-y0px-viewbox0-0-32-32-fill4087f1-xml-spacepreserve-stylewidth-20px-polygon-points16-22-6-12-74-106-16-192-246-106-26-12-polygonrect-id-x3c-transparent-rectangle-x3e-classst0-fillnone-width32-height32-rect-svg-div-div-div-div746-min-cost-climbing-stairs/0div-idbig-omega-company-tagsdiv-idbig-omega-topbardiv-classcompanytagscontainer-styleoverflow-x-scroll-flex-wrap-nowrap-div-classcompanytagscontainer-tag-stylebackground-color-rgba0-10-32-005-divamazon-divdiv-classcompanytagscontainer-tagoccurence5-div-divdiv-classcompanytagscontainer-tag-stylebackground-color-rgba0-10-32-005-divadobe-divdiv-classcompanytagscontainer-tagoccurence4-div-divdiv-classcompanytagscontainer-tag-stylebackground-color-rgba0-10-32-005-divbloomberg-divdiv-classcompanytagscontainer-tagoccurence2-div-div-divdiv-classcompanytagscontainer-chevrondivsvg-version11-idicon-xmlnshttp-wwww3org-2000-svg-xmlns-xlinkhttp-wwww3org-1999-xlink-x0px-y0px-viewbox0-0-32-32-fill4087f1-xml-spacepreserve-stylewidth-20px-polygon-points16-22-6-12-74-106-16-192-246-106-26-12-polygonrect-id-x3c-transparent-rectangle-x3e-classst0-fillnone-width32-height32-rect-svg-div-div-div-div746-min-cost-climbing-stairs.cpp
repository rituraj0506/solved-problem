class Solution {
public:
    int f(int ind,vector<int>& cost,vector<int>&dp)
    {
        if(ind<=1) return cost[ind];
        //if(ind==1) return 1;
        if(dp[ind]!=-1) return dp[ind];
       int ans=f(ind-1,cost,dp);
       int ans1=f(ind-2,cost,dp);
        return dp[ind]=cost[ind]+min(ans,ans1);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
         return min(f(n-1,cost,dp),f(n-2,cost,dp));
    }
};