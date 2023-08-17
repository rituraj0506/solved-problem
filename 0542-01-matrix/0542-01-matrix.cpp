class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
         vector<vector<int>>dist(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
         for(int j=0;j<m;j++)
         {
             if(mat[i][j]==0 &&!vis[i][j])
             {
                 q.push({{i,j},0});
                 vis[i][j]=1;
             }
             else
             {
                 vis[i][j]=0;
             }
         }
        }
        
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dis=q.front().second;
            q.pop();
            dist[r][c]=dis;
            int dr[]={-1,0,+1,0};
            int dc[]={0,+1,+0,-1};
            for(int i=0;i<4;i++)
            {
               int nr=r+dr[i];
                int nc=c+dc[i];
                
if(nr>=0 && nr<n && nc>=0 && nc<m && mat[nr][nc]==1 &&!vis[nr][nc])
{
    vis[nr][nc]=1;
    q.push({{nr,nc},dis+1});
}
            }
        }
        return dist;
    }
};