class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>& grid,vector<vector<int>>&vis,int dr[],int dc[])
    {
        vis[r][c]=1;
        int n=grid.size();
       int m=grid[0].size();
        
        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
            
            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1&& !vis[nr][nc])
            {
                if(!vis[nr][nc])
                    dfs(nr,nc,grid,vis,dr,dc);
            }
        }
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
        int c=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int dr[]={-1,0,+1,0};
        int dc[]={0,+1,0,-1};
        for(int i=0;i<m;i++)
        {
            if(grid[0][i]==1 && !vis[0][i])
            {
                dfs(0,i,grid,vis,dr,dc);
            }
              if(grid[n-1][i]==1&&!vis[n-1][i])
            {
                dfs(n-1,i,grid,vis,dr,dc);
            }
                
        }
         for(int j=0;j<n;j++)
        {
            if(grid[j][0]==1&& !vis[j][0])
            {
                dfs(j,0,grid,vis,dr,dc);
            }
              if(grid[j][m-1]==1 && !vis[j][m-1])
            {
                dfs(j,m-1,grid,vis,dr,dc);
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 
                if(grid[i][j]==1 &&!vis[i][j])
                   c++;
            }
        }
        return c;
        
        
    }
};