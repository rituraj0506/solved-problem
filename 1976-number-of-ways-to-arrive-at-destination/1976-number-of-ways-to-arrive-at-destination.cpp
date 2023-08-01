class Solution {
public:
   #define ll long long
   ll mod = 1e9+7;
    int countPaths(int n, vector<vector<int>>& roads) {
       
        vector<pair<ll,ll>>adj[n];
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
        vector<ll>dist(n,1e18),ways(n,1);
        dist[0]=0;
        ways[0]=1;
        pq.push({0,0});
        while(!pq.empty())
        {
            ll dis=pq.top().first;
            ll node=pq.top().second;
            pq.pop();
            
            for(auto it:adj[node])
            {
                ll adjnode=it.first;
                ll adjwt=it.second;
                if(dis+adjwt<dist[adjnode])
                {
                    dist[adjnode]=dis+adjwt;
                    pq.push({dis+adjwt,adjnode});
                    ways[adjnode]=ways[node];
                }
                else if(dis+adjwt==dist[adjnode])
                {
                    ways[adjnode]=(ways[node]+ways[adjnode])%mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};