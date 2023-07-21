class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& nums) {
     // topological sort
        // given  vector denoteds node and edge first converted into adj list for dag
        vector<int>adj[n];
        for(auto it:nums)
        {
           adj[it[1]].push_back(it[0]);
        }
        
        vector<int>indeg(n,0);
        for(int i=0;i<n;i++)
        {
        for(auto it:adj[i])
            indeg[it]++; 
        }
        
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
                q.push(i);
        }
        vector<int>topo;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            topo.push_back(node);
            
            for(auto it:adj[node])
            {
                indeg[it]--;
                if(indeg[it]==0)
                    q.push(it);
            }
        }
        if(topo.size()==n) return true;// means cycle
        return false;
    }
};