class Solution {
public:
    int f(int ind,vector<int>& coins,int amount,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(amount%coins[ind]==0)
                return 1;
            else
                return 0;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int nott=f(ind-1,coins,amount,dp);
        int take=0;
        if(coins[ind]<=amount)
            take=f(ind,coins,amount-coins[ind],dp);
        return dp[ind][amount]=take+nott;
    }
    int change(int amount, vector<int>& coins) {
      int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
      return f(n-1,coins,amount,dp); 
    }
};