class Solution {
public:
    int f(int ind1,int ind2,string&s,string&t,vector<vector<int>>&dp)
    {
        if(ind1<0||ind2<0)
            return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(s[ind1]==t[ind2])
            return dp[ind1][ind2]=1+f(ind1-1,ind2-1,s,t,dp);
        else
            return dp[ind1][ind2]=max(0+f(ind1-1,ind2,s,t,dp),f(ind1,ind2-1,s,t,dp));
    }
    int lcs(string &s ,string &t)
    {
        int m=s.size();
        int n=t.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(m-1,n-1,s,t,dp);
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        return lcs(s,t);
    }
};