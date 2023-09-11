class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           m[nums[i]]++; 
        }
        priority_queue<pair<int,int>>maxh;
        for(auto it:m)
        {
            maxh.push({it.second,it.first});
        }
        while(maxh.size()>0)
        {
            int b=maxh.top().first;
            int c=maxh.top().second;
            if(k>0){
            ans.push_back(c);
              k--;
            }
            else
                break;
            maxh.pop();
        }
        return ans;
    }
};