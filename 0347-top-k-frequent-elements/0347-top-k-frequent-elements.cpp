class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
       priority_queue<pair<int,int>>maxh;
        for(auto it:m)
        {
            maxh.push({it.second,it.first});
        }
        while(maxh.size()>0&&k>0)
        {
          ans.push_back(maxh.top().second);
            maxh.pop();
            k--;
        }
        return ans;
    }
};