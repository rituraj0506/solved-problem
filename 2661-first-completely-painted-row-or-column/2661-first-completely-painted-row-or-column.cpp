class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        unordered_map<int,pair<int,int>>mp;
        int n1=arr.size();
        vector<int>row(n,0);
        vector<int>col(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<n1;i++)
        {
          int ele=arr[i];
          int r=mp[ele].first, c=mp[ele].second;
          row[r]++;
          col[c]++;
            
            if(row[r]==m||col[c]==n)
                return i;
        }
        return 0;
    }
};