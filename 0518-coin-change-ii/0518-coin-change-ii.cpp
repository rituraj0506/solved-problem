class Solution {
public:
    int f(int ind,vector<int>&coins,vector<vector<int>>&dp,int tar)
    {
        if(ind==0)
        {
            if(tar%coins[ind]==0)
                return 1;
            else
                return 0;
        }
        if(dp[ind][tar]!=-1) return dp[ind][tar];
        int nott=0;
         nott=f(ind-1,coins,dp,tar);
        int take=0;
        if(coins[ind]<=tar)
           take=f(ind,coins,dp,tar-coins[ind]);
           return dp[ind][tar]=take+nott;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       return f(n-1,coins,dp,amount);
    }
};