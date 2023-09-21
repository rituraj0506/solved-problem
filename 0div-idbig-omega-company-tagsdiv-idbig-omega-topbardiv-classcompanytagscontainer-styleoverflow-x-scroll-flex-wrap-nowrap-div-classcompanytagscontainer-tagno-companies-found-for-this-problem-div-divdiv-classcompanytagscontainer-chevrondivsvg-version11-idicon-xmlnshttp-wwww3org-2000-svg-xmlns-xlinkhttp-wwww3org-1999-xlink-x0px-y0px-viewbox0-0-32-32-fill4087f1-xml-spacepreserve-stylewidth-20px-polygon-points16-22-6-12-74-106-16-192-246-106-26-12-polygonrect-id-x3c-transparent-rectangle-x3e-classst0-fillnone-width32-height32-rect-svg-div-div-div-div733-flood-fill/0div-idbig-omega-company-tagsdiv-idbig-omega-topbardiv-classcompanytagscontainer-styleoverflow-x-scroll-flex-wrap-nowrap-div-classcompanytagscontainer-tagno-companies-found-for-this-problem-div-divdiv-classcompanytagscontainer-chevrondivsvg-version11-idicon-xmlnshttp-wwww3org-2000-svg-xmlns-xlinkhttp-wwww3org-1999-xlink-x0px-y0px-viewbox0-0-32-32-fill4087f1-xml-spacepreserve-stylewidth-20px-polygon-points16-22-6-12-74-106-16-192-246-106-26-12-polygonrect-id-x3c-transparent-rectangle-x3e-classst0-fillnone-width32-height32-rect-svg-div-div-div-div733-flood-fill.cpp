class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         vector<vector<int>>vis(image);
          int n=image.size();
          int m=image[0].size();
          vis[sr][sc]=color;
          queue<pair<int,int>>q;
          q.push({sr,sc});
        int inicol=image[sr][sc];
        int dr[]={1,0,-1,0};
        int dc[]={0,+1,0,-1};
         while(!q.empty())
         {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
             for(int i=0;i<4;i++)
             {
                 int nr=r+dr[i];
                 int nc=c+dc[i];
    if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==inicol && vis[nr][nc]!=color)
    {
        //!vis[nr][nc] not meaning of this here  becoz we change in vis 
        q.push({nr,nc});
        vis[nr][nc]=color;
    }
             }
         }
        return vis;
      
    }
};