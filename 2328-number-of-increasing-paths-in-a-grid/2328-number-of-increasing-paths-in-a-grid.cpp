class Solution {
public:
    int mod=1e9+7;
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        int m=grid[0].size();
        int n=grid.size();
        if(dp[i][j]!=-1) return dp[i][j];
        if(i<0&& j<0&& i>=n &&j>=m)
            return 0;
        int res=1;
        if(i>0 && grid[i][j]<grid[i-1][j])
            res+=f(i-1,j,grid,dp);
        if(i<n-1&& grid[i][j]<grid[i+1][j]) // grid[i+1] so i<n-1
            res+=f(i+1,j,grid,dp);
        if(j>0&&grid[i][j]<grid[i][j-1])
           res+=f(i,j-1,grid,dp);
         if(j<m-1&&grid[i][j]<grid[i][j+1])
           res+=f(i,j+1,grid,dp);
           return dp[i][j]=res%mod;
    }
    int countPaths(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
          int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=(ans+f(i,j,grid,dp))%mod;
            }
        }
        return ans;
    }
};