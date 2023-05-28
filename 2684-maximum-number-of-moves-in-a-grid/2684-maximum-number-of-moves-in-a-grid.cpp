class Solution {
public:
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        int m=grid[0].size();
        int n=grid.size();
        if(j>=m||i<0||i>=n) return 0;
        int up=0,d=0,dia=0;
        if(dp[i][j]!=-1) return dp[i][j];
       if(i-1>=0&&j+1<m && grid[i][j]<grid[i-1][j+1]) 
           up=1+f(i-1,j+1,grid,dp);
        if(j+1<m&&grid[i][j]<grid[i][j+1])
             d=1+f(i,j+1,grid,dp);
        if(i+1<n&&j+1<m && grid[i][j]<grid[i+1][j+1])
             dia=1+f(i+1,j+1,grid,dp);
        return dp[i][j]=max({up,d,dia});
    }
    int maxMoves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxi=-1e9;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,f(i,0,grid,dp));
        }
        return maxi;
      
    }
};