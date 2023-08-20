class Solution {
public:

bool solve(vector<int>adj[], int sr, int dest, vector<int>&vis){
    
    if(sr==dest) return true;
    
    vis[sr]=1;
    
    for(auto it:adj[sr]){
        if(!vis[it]){
            bool s=solve(adj,it,dest,vis);
            if(s==true) return true;
        }
    }
    return false;
}

bool validPath(int n, vector<vector<int>>& edges, int sr, int ds) {
    vector<int>vis(n,0);
    vector<int>adj[n];
    for(auto it:edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
         return solve(adj,sr,ds,vis);
    }
};