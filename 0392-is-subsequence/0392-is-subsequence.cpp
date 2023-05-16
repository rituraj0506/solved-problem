class Solution {
public:
    int f(int i,int j,string &s,string &t,vector<vector<int>>&dp)
    {
        if(i<0||j<0) return 0;
       if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j])
            return dp[i][j]=1+f(i-1,j-1,s,t,dp);
        else
             return dp[i][j]=0+max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
        
    }
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int n1=t.size();
        if(n>n1) return false;
        vector<vector<int>>dp(n,vector<int>(n1,-1));
       if(f(n-1,n1-1,s,t,dp)==n) return true;
        else
            return false;
    }
};