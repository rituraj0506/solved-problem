class Solution {
public:
    long long fun(int i,vector<vector<int>>& question,vector<long long>&dp)
    {
       int n=question.size();
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        long long take=question[i][0]+fun(i+question[i][1]+1,question,dp);
        long long nott=fun(i+1,question,dp);
        return dp[i]=max(take,nott);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        long long n=questions.size();
        int m=questions[0].size();
        vector<long long>dp(n,-1);
        return fun(0,questions,dp);
    }
};