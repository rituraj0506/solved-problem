class Solution {
public:
    int mod=1e9+7;
    int fun(int i,int l,int h,int z,int o,vector<int>&dp)
    {
        if(i>=h) return 0;
        if(dp[i]!=-1) return dp[i];
       int a= fun(i+z,l,h,z,o,dp);
        if(i+z>=l&&i+z<=h) a++;
        int b=fun(i+o,l,h,z,o,dp) ;
        if(i+o>=l&&i+o<=h) b++;
        return dp[i]=(a+b)%mod;
    }
    int countGoodStrings(int l, int h, int z, int o) {
        vector<int>dp(1e5+1,-1);
        return fun(0,l,h,z,o,dp);
    }
};