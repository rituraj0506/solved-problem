class Solution {
public:
    int f(vector<int>&ans)
    {
        int c1=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]<0)
                c1++;
        }
        return c1;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=f(grid[i]);
        }
        return c;
    }
};