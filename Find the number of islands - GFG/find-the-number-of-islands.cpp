//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(int r,int c,vector<vector<char>>&grid,vector<vector<int>>&vis)
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({r,c});
        vis[r][c]=1;
        while(!q.empty())
        {
            auto it=q.front();
              r=it.first;
              c=it.second;
            q.pop();
           for(int dr=-1;dr<=1;dr++)
           {
            for(int dc=-1;dc<=1;dc++)
            {
                 int nr=r+dr;
                 int nc=c+dc;
if(nr>=0&&nr<n && nc>=0 && nc<m && grid[nr][nc]=='1'&&!vis[nr][nc])
{
    q.push({nr,nc});
    vis[nr][nc]='1';
}
            }
           }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    int c=0;
     for(int i=0;i<n;i++)
     {
     for(int j=0;j<m;j++)
     {
       if(grid[i][j]=='1'&&!vis[i][j])
       {
           c++;
           bfs(i,j,grid,vis);
       }
     }
     }
     return c;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends