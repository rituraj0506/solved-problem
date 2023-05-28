class Solution {
public:
    int f(int n,vector<int>&dp)
    {
        if(n==0) return 0;// zero ko mai kisi perfect square se nhi bana sakta in constraint 1<=n<=10^4
        int ans=n;// max no of sq possible for any no 
        if(dp[n]!=-1) return dp[n];
        for(int i=1;i*i<=n;i++)
        {
            ans=min(ans,1+f(n-i*i,dp));
        }
        return dp[n]=ans;
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
       return  f(n,dp);
    }
};