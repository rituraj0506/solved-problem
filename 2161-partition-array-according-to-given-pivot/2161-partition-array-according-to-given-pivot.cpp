class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int l=0,s=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
                l++;
            if(nums[i]==pivot)
                s++;
        }
        vector<int>ans(n);
         int h=l+s;// imp in upar
         s=l;
         l=0;
       for(auto it:nums)
       {
           if(it<pivot)
               ans[l++]=it;
          if(it==pivot)
               ans[s++]=it;
           if(it>pivot)
               ans[h++]=it;
       }
        return ans;
    }
};