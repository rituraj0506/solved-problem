class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
           m[nums[i]]++; 
        }
        for(auto it:m)
        {
            pq.push({it.second,it.first});
        }
        while(!pq.empty())
        {
            int a=pq.top().first;
            int b=pq.top().second;
            if(k>0){
            ans.push_back(b);
                k--;
            }
            pq.pop();
        }
        return ans;
    }
};