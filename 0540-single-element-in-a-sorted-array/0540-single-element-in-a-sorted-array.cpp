class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1])
            return nums[0];
        else if(nums[h]!=nums[h-1]) return nums[h];
        
        
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
                return nums[mid];
              else if(((mid%2==1)&&nums[mid]==nums[mid-1])||((mid%2==0) &&  nums[mid]==nums[mid+1]))
                  l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
};