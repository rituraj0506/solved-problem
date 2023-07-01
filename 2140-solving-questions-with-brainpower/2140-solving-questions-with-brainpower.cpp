class Solution {
public:
    long long f(int ind,vector<vector<int>>& questions,vector<long long>&dp)
    {
        int n=questions.size();
        if(ind>=n)
            return 0;
        if(dp[ind]!=-1) return dp[ind];
        long long nott=0+f(ind+1,questions,dp);
        long long take=0;
        take=questions[ind][0]+f(ind+questions[ind][1]+1,questions,dp);
        return dp[ind]=max(take,nott);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
       vector<long long>dp(n,-1);
       return f(0,questions,dp);
    }
};