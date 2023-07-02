class Solution {
public:
    int f(int ind,int m,int n,vector<string>&strs, vector<vector<vector<int>>>&dp)
    {
        if(ind>=strs.size()) return 0;
        if(dp[ind][m][n]!=-1) return dp[ind][m][n];
        int cz=count(strs[ind].begin(),strs[ind].end(),'0');
        int co=strs[ind].size()-cz;
        int take,nott;
        if(m-cz>=0 && n-co>=0)
         return dp[ind][m][n]=max(1+f(ind+1,m-cz,n-co,strs,dp),f(ind+1,m,n,strs,dp));
        return dp[ind][m][n]=f(ind+1,m,n,strs,dp);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int n1=strs.size();
        vector<vector<vector<int>>>dp(n1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
      return f(0,m,n,strs,dp);
    }
};