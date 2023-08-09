class Solution {
public:
 bool isvalid(vector<int>& nums,int d,int p){
        int n=nums.size();
        int c=0;
         for (int i = 0; i  < n-1; i++){

            if (nums[i + 1] - nums[i] <= d) {
               c++;
               i++;//no index appears more than once amongst the p pairs
            }
            if(c>=p)//able to find
            return true;
           }
           return false;
    }
    
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,h=nums[n-1]-nums[0];
        int res=0;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(isvalid(nums,mid,p))
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