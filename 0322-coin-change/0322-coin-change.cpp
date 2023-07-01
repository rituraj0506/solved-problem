class Solution {
public:
    int f(int ind,vector<int>& coins, int target,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
           if(target%coins[ind]==0)
               return target/coins[ind];
            else
                return 1e9;
        }
        if(dp[ind][target]!=-1) return dp[ind][target];
        int nott=0+f(ind-1,coins,target,dp);
        int take=1e9;
        if(coins[ind]<=target)
        take=1+f(ind,coins,target-coins[ind],dp);
        return dp[ind][target]=min(take,nott);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       int ans= f(n-1,coins,amount,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};