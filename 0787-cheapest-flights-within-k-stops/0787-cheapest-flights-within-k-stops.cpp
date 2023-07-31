class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
        for(auto it:flights)
        {
          adj[it[0]].push_back({it[1],it[2]});  
        }
        
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        vector<int>dist(n,1e9);
        while(!q.empty())
        {
            auto it=q.front();
            int stop=it.first;
            int node=it.second.first;
            int cost=it.second.second;
            q.pop();
            if(stop>k)continue;
            for(auto it:adj[node])
            {
                int adjnode=it.first;
                int adjwt=it.second;
                if(cost+adjwt<dist[adjnode]&&stop<=k)
                {
                    dist[adjnode]=cost+adjwt;
                    q.push({stop+1,{adjnode,cost+adjwt}});
                }
            }
        }
        if(dist[dst]==1e9) return -1;
        return dist[dst];
    }
};