class Solution {
public:
    void bfs(int r,int c,vector<vector<char>>& grid,vector<vector<int>>&vis,int dr[],int dc[])
    {
        vis[r][c]=1;
        queue<pair<int,int>>q;
        q.push({r,c});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                    int nr=r+dr[i];
                    int nc=c+dc[i];
if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && !vis[nr][nc]){
                        vis[nr][nc]=1;
                        q.push({nr,nc});
                    
                       
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int dr[]={-1,0,+1,0};
        int dc[]={0,+1,0,-1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&grid[i][j]=='1')
                {
                    c++;
                    bfs(i,j,grid,vis,dr,dc);
                }
            }
        }
        return c;
    }
};