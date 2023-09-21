class Solution {
public:
    void bfs(int node,vector<int>&vis, vector<int>adj[])
    {
        queue<int>q;
        vis[node]=1;
        q.push(node);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n];
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<int>vis(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
              c++;
              bfs(i,vis,adj);

            }
        }
        return c;
        
    }
};