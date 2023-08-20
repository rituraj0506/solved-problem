class Solution {
public:
    void dfs(int src,int dest,vector<int>path,vector<vector<int>>&ans,vector<vector<int>>& graph)
    {
        path.push_back(src);
        
        for(auto it:graph[src])
        dfs(it,dest,path,ans,graph);
        
        if(src==dest)
        {
            ans.push_back(path);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<vector<int>>ans;
        vector<int>path;
        int n=graph.size();
        dfs(0,n-1,path,ans,graph);
        return ans;
    }
};