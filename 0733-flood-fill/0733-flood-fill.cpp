class Solution {
public:
    void dfs(int r,int c,int incol,vector<vector<int>>& img,vector<vector<int>>&ans,int dr[],int dc[],int col)
    {
        int n=img.size();
        int m=img[0].size();
        ans[r][c]=col;
        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
 if(nr>=0&& nr<n && nc>=0 &&nc<m&&img[nr][nc]==incol && ans[nr][nc]!=col)
     dfs(nr,nc,incol,img,ans,dr,dc,col);
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int col) {
      int incol=img[sr][sc];
        vector<vector<int>>ans=img;
        int dr[]={-1,0,+1,0};
        int dc[]={0,+1,0,-1};
        dfs(sr,sc,incol,img,ans,dr,dc,col);
        return ans;
    }
};