class Solution {
public:
     bool canvalid(vector<int>& nums,int mid,int k)
     {
             int n=nums.size();
             int cap=1;
             int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=nums[i];
               
                if(sum>mid)
                {
                     cap++;
                    sum=nums[i];
                }
                if(cap>k)
                    return false;
            }
         return true;
     }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int l=*max_element(nums.begin(),nums.end());
        int end=0;
        for(int i=0;i<n;i++)
        {
           end+=nums[i]; 
        }
        int h=end;
        int res=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(canvalid(nums,mid,k))
            {
                res=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }
        return res;
    }
};