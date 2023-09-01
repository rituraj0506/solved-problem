class Solution {
public:
    int bs(int l,int h,vector<int>& nums, int target)
    {
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
    int f(vector<int>& nums)
    {
        int n=nums.size();
        int l=0,h=n-1;
         if(nums[l]<nums[h]) /*in the case arr is not rotated*/
            return 0;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]<=nums[prev]&&nums[mid]<=nums[next])
                return mid;
            else if(nums[0]<=nums[mid])
                l=mid+1;
            else if(nums[mid]<=nums[h])
            {
                h=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int ind=f(nums);
        cout<<ind;
        int a=bs(0,ind-1,nums,target);
        int b=bs(ind,n-1,nums,target);
        if(a==-1)
            return b;
        else
            return a;
    }
};