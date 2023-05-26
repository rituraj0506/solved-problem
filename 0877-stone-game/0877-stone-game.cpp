class Solution {
public:
    bool f(int i,vector<int>& piles,vector<int>&dp)
    {
        if(i<0) return false;
        if(i==0) return piles[i];
        if(dp[i]!=-1) return dp[i];
        int take=f(i-1,piles,dp)+piles[i];
        int nott=f(i-1,piles,dp)+0;
        return dp[i]=max(take,nott);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<int>dp(n,-1);
        return max(f(n-1,piles,dp),f(0,piles,dp));
    }
};