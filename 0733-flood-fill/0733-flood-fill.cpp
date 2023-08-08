class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int n=image.size();
        int m=image[0].size();
    vector<vector<int>>vis(image);
     queue<pair<int,int>>q;
     q.push({sr,sc});
     vis[sr][sc]=newcolor;
     int dr[]={-1,0,+1,0};
     int dc[]={0,+1,0,-1};
     int incol=image[sr][sc];
     while(!q.empty())
     {
         int r=q.front().first;
         int c=q.front().second;
         q.pop();
         for(int i=0;i<4;i++)
         {
             int nr=r+dr[i];
             int nc=c+dc[i];
             if(nr>=0&&nr<n&&nc>=0&&nc<m&&image[nr][nc]==incol && vis[nr][nc]!=newcolor)
             {
                 q.push({nr,nc});
                 vis[nr][nc]=newcolor;
             }
         }
     }
      return vis;
    }
};