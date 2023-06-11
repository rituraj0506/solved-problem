class Solution {
public:
    int f(int i,int j,string&s,string &t,vector<vector<int>>&dp)
    {
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int take=0,nott=0;
        nott=f(i-1,j-1,s,t,dp);
        if(s[i]==t[j])
        take=1+f(i-1,j-1,s,t,dp);
        else
        take=max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
        return dp[i][j]=max(take,nott);
    }
    int fun(string &s,string&t,vector<vector<int>>&dp)
    {
        int n=s.size();
        int n1=t.size();
        return f(n-1,n1-1,s,t,dp);
    }
    int minInsertions(string s) {
       int n=s.size();
       string t=s;
       reverse(t.begin(),t.end());
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=fun(s,t,dp);
        return n-ans;
    }
};