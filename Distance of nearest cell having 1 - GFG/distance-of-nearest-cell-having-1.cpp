//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n=grid.size();
	    int m=grid[0].size();
	   	vector<vector<int>>vis(n,vector<int>(m,0));
	   	vector<vector<int>>dist(n,vector<int>(m,0));
	   	queue<pair<pair<int,int>,int>>q;
	   	for(int i=0;i<n;i++)
	   	{
	   	    for(int j=0;j<m;j++)
	   	    {
	   	        if(grid[i][j]==1)
	   	        {
	   	           q.push({{i,j},0});
	   	           vis[i][j]=1;
	   	        }
	   	        else
	   	        vis[i][j]=0;
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
	   	    dist[r][c]=dis;
	   	    for(int i=0;i<4;i++)
	   	    {
	   	      int nr=r+dr[i];
	   	      int nc=c+dc[i];
if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==0&&!vis[nr][nc])
{// vice versa also true;
    q.push({{nr,nc},dis+1});
    vis[nr][nc]=1;
}
	   	    }
	   	}
	   	return dist;
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
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends