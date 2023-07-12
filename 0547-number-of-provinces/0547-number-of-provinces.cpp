class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<int>adj[])
    {
        
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                dfs(it,vis,adj);
            }
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
       
        int n=isConnected.size();
        vector<int>vis(n,0);
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 and i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
         int c=0;
        for(int i=0;i<n;i++)
        {
           
            if(!vis[i])
            {
                 c++;
                dfs(i,vis,adj);
            }
        }
        return c;
    }
};