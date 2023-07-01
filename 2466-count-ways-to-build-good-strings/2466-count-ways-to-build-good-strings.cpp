class Solution {
public:
    int mod=1e9+7;
    int sol(int target,vector<int>&dp,int zero,int one)
    {
        if(target<0) return 0;
        if(target==0) return 1;
	// if target is 0 that means this target can be made so return 1
        if(dp[target]!=-1) return dp[target];
        long long sum;
        // target - a is adding 'a' 0's to the string
        sum=sol(target-zero,dp,zero,one)+sol(target-one,dp,zero,one);
        return dp[target]=sum%mod;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        int ans=0;
        vector<int>dp(high+1,-1);
        for(int i=low;i<=high;i++)
        {
           ans=ans%mod+sol(i,dp,zero,one)%mod; 
        }
        return ans%mod;
    }
};