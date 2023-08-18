class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int>adj[n];
        for(auto it:prerequisites)
        {
         adj[it[0]].push_back(it[1]);
        }
        vector<int>indeg(n,0);
        queue<int>q;
        
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
                indeg[it]++;
        }
        
         for(int i=0;i<n;i++)
        {
               if(indeg[i]==0)
                 q.push(i);
        }
        
        int c=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            c++;
            
            for(auto it:adj[node])
            {
                indeg[it]--;
                if(indeg[it]==0)
                    q.push(it);
            }
        }
        
        if(c==n) return true;
        else
            return false;
        
    }
};