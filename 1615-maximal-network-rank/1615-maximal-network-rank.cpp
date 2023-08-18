class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>count(n,0);
        vector<vector<int>>dir(n,vector<int>(n,0));
        int maxi=0;
        for(auto it:roads)
        {
            count[it[0]]++;
            count[it[1]]++;
            dir[it[0]][it[1]]=1;
            dir[it[1]][it[0]]=1;
        }
        // count[i]+count[j]-dir[i][j] means total connected road - direct com=nnected road
        for(int i=0;i<n;i++)
        {
         for(int j=i+1;j<n;j++)
         {
            maxi=max(maxi,count[i]+count[j]-dir[i][j]); 
         }
        }
        return maxi;
    }
};