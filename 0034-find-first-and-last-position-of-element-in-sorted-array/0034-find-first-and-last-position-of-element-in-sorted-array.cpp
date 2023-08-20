class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fs=-1,ls=-1;
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
         int mid=l+(h-l)/2;
        if(nums[mid]==target)
           {
              fs=mid;
              h=mid-1;
           }
          else if(nums[mid]<target)
           {
             l=mid+1;
           }
            else
                h=mid-1;
        }
        l=0,h=n-1;
         while(l<=h)
        {
         int mid=l+(h-l)/2;
        if(nums[mid]==target)
           {
              ls=mid;
              l=mid+1;
           }
          else if(nums[mid]<target)
           {
             l=mid+1;
           }
            else
                h=mid-1;
        }
        return {fs,ls};
    }
};