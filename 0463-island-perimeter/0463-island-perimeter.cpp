class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int perim=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1){//if once l come then we will check
                    perim+=4;
                if(i>0 && grid[i-1][j]==1)
                    perim-=2;
                if(j>0 && grid[i][j-1]==1)
                    perim-=2;
                }
            }
        }
        return perim;
    }
};