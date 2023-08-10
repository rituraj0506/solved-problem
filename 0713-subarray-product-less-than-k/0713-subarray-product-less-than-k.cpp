class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int st=0,end=0;
       int prod=1;
        int c=0;
        if(k<=1) return 0;
        while(end<nums.size())
        {
            prod=prod*nums[end];
            
            while(end<nums.size() && prod>=k)
            {
                prod=prod/nums[st];
                st++;
            }
            if(prod<k)
                c+=end-st+1;
            
            end++;
        }
        return c;
    }
};