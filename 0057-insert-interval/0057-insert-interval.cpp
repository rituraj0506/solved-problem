class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        for(auto it:intervals)
        {
            ans.push_back(it);
        }
        ans.push_back(newInterval);
 
        int n=ans.size();
        sort(ans.begin(),ans.end());
        vector<vector<int>>res;
        for(int i=0;i<n;i++)
        {
           if(res.empty())
           {
               res.push_back(ans[i]);
           }
            else{
                vector<int>&v=res.back();
                int y=v[1];
                if(ans[i][0]<=y)
                {
                    v[1]=max(ans[i][1],y);
                }
                else
                    res.push_back(ans[i]);
            }
        }
        return res;
    }
};