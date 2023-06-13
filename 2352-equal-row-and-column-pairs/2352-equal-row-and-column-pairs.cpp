class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>m;
        int ans=0;
        for(auto it:grid)
        {
            m[it]++;
        }
        for(int i=0;i<grid[0].size();i++)
        {
            vector<int>v;
            for(int j=0;j<grid.size();j++)
            {
               v.push_back(grid[j][i]);
            }
            if(m.count(v))
                ans+=m[v];
        }
        return ans;
    }
};