class Solution {
public:
     void dfs(int r,int c,vector<vector<char>>& board,vector<vector<int>>&vis)
    {
        int n=board.size();
        int m=board[0].size();
        vis[r][c]=1;
         int dr[]={-1,0,+1,0};
        int dc[]={0,+1,0,-1};
        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
    if(nr>=0 && nr<n && nc>=0 && nc<m && board[nr][nc]=='O' && !vis[nr][nc])
       {
        if(!vis[nr][nc])
            dfs(nr,nc,board,vis);
       }
        }
    }
    void solve(vector<vector<char>>& board) {
         int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            if(board[0][i]=='O'&& !vis[0][i])
            {
                dfs(0,i,board,vis);
            }
              if(board[n-1][i]=='O'&&!vis[n-1][i])
            {
                dfs(n-1,i,board,vis);
            }
                
        }
         for(int j=0;j<n;j++)
        {
            if(board[j][0]=='O'&& !vis[j][0])
            {
                dfs(j,0,board,vis);
            }
              if(board[j][m-1]=='O'&& !vis[j][m-1])
            {
                dfs(j,m-1,board,vis);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O' && !vis[i][j])
                {
                    board[i][j]='X';
                }
            }
        }
    
    }
};