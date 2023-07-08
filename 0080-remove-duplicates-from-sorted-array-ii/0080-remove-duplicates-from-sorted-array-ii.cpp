class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
       
        for(int i=0;i<n;i++)
        {
          if(m[nums[i]]>2)
              m[nums[i]]=2;
        }
        nums.clear();
        for(auto it:m) 
       {
          while(it.second!=0)
          {
              nums.push_back(it.first);
              it.second--;
          }
       }
        sort(nums.begin(),nums.end());
        return nums.size();
    }
};