class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(n);
        vector<int>indeg(n,0);
        vector<int>topo;
        for(auto i:prerequisites)
        {
            adj[i[1]].push_back(i[0]);
        }
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
            {
                indeg[it]++;
            }
        }
         queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
                q.push(i);
        }
        while(!q.empty())
        {
            int node=q.front();
            topo.push_back(node);
            q.pop();
            for(auto it:adj[node])
            {
                indeg[it]--;
                if(indeg[it]==0)
                    q.push(it);
            }    
        }
        if(topo.size()==n) return topo;
            return {};
            
    }
};