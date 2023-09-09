class Solution {
public:
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
       if(i<0||j<0) return 1e9;
        if(i==0&&j==0) return grid[i][j];
         if(dp[i][j]!=-1) return dp[i][j];
        int up=f(i-1,j,grid,dp)+grid[i][j];
        int left=f(i,j-1,grid,dp)+grid[i][j];
        return dp[i][j]= min(up,left);
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,grid,dp);
    }
};