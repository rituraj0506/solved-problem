//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<int>>ans(n,vector<int>(m,0));
    int maxi=0;
    queue<pair<pair<int,int>,int>>q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==2)
            {
               q.push({{i,j},0});
               vis[i][j]=2;
            }
            else{
                vis[i][j]=0;
            }
        }
    }
      	int dr[]={-1,0,+1,0};
	   	int dc[]={0,+1,0,-1};
    while(!q.empty())
    {
        int r=q.front().first.first;
        int c=q.front().first.second;
        int dis=q.front().second;
         q.pop();
          maxi=max(maxi,dis);
          for(int i=0;i<4;i++)
          {
              int nr=r+dr[i];
              int nc=c+dc[i];
if(nr>=0&&nr<n && nc>=0 && nc<m&&grid[nr][nc]==1 && !vis[nr][nc])
{
    q.push({{nr,nc},dis+1});
    vis[nr][nc]=2;
}
          }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1&&!vis[i][j])
            return -1;
        }
    }
    return maxi;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends