class Solution {
public:
    int f(int ind1,int ind2,vector<vector<int>>&grid, vector<vector<int>>&dp)
    {
        if(ind1<0||ind2<0) return 0;
        if(ind1>=0 && ind2>=0 && grid[ind1][ind2]==1) return 0;
        if(ind1==0&&ind2==0) return 1;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
         int up=f(ind1-1,ind2,grid,dp);
        int left=f(ind1,ind2-1,grid,dp);
        return dp[ind1][ind2]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>&grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,grid,dp);
    }
};