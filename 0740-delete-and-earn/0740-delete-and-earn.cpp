class Solution {
public:
    // res of this prob is We first transform the nums array into a points array that sums up the total number of points for that particular value. A value of x will be assigned to index x in points.

//nums: [2, 2, 3, 3, 3, 4] (2 appears 2 times, 3 appears 3 times, 4 appears once)
//points: [0, 0, 4, 9, 4] <- This is the gold in each house!
    int f(int i,vector<int>&v,vector<int>&dp)
    {
        if(i<0) return 0;
        if(i==0) return v[0];
        if(dp[i]!=-1) return dp[i];
        int nott=f(i-1,v,dp)+0;
        int take=f(i-2,v,dp)+v[i];
        return dp[i]=max(nott,take);
    }
    int deleteAndEarn(vector<int>& nums) {
       vector<int>v(10001,0);
        for(auto it:nums)
        {
           v[it]+=it;
        }
        int n=v.size();
        vector<int>dp(n,-1);
        return f(n-1,v,dp);
    }
};