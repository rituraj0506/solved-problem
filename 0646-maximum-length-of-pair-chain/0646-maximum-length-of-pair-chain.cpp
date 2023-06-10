class Solution {
public:
    int f(int i,int prev,vector<vector<int>>& pairs,vector<vector<int>>&dp)
    {
        if(i==pairs.size())
            return 0; 
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int nott=0,take=0;
         nott=f(i+1,prev,pairs,dp);
        if(prev==-1||pairs[prev][1]<pairs[i][0])
        take=1+f(i+1,i,pairs,dp);
        return dp[i][prev+1]=max(take,nott);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        sort(pairs.begin(),pairs.end());
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
       return f(0,-1,pairs,dp);
    }
};