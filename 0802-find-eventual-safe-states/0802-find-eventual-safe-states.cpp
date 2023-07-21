class Solution {
public:
    bool dfschk(int node,vector<vector<int>>& graph,vector<bool>&vis,vector<bool>&pathvis,	vector<bool>&check)
    {
        vis[node]=1;
        pathvis[node]=1;
        check[node]=0;
        
        for(auto it:graph[node])
        {
            if(!vis[it])
            {
                if(dfschk(it,graph,vis,pathvis,check)==true){
                    check[node]=0;
                    return true;}
            }
            else if(pathvis[it])
            {
             check[node]=0;
                return true;
            }
        }
        check[node]=1;
        pathvis[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       vector<int>ans;
        int n=graph.size();
    vector<bool> vis(n,0);
	vector<bool> pathvis(n,1);
	vector<bool> check(n,0);
        for(int i=0;i<n;i++)// in component form
        {
            if(!vis[i])
            {
                dfschk(i,graph,vis,pathvis,check);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(check[i]==1)
                ans.push_back(i);
        }
        return ans;
    }
};