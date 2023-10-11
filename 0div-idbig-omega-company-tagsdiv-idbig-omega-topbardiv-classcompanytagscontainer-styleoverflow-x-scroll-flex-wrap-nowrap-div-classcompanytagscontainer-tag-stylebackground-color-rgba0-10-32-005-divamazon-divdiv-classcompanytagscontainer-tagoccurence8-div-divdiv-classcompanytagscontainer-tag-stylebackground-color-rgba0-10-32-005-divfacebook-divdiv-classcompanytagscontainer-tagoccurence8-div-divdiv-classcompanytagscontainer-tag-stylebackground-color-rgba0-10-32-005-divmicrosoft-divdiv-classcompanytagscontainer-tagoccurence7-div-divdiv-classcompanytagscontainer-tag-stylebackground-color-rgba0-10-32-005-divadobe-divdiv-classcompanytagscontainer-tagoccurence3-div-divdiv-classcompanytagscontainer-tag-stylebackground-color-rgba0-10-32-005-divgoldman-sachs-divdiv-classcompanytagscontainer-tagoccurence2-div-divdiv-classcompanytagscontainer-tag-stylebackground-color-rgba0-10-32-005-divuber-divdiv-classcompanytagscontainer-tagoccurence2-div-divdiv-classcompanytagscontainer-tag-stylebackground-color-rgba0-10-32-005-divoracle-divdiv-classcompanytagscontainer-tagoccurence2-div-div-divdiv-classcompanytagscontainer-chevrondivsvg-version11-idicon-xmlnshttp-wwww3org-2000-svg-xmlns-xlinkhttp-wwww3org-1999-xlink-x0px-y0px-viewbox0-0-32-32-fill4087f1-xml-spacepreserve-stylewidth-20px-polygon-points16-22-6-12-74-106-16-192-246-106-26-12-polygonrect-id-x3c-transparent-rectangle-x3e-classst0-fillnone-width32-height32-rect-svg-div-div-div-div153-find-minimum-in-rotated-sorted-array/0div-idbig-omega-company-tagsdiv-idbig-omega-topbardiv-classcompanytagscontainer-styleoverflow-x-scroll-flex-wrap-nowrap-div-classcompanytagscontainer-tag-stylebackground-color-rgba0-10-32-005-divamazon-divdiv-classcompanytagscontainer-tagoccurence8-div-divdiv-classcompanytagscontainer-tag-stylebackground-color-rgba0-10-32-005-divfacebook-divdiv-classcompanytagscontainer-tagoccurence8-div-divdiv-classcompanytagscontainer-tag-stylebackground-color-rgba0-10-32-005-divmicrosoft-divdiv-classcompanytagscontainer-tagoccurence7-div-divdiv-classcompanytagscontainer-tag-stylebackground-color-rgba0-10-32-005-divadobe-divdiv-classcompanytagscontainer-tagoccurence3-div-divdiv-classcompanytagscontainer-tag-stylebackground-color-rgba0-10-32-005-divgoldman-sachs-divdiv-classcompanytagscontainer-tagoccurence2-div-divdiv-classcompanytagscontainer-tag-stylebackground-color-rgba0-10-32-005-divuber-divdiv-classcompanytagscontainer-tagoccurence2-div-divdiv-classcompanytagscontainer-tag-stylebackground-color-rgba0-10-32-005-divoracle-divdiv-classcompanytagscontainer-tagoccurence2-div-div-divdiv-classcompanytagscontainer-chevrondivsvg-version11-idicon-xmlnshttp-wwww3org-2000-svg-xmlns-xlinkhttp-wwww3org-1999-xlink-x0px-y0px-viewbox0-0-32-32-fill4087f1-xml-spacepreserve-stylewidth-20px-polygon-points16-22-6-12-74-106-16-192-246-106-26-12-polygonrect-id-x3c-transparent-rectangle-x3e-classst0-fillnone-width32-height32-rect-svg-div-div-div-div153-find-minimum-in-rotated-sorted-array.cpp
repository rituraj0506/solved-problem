class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]<=nums[prev]&& nums[mid]<=nums[next])
                return nums[mid];
            else if(nums[mid]<=nums[h])
                h=mid-1;
            else if(nums[0]<=nums[mid])
                l=mid+1;
        }
        return -1;
    }
};