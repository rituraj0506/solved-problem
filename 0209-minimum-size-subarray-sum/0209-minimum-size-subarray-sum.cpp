class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int sum=0;
        int mini=1e9;
        while(j<n)
        {
         sum+=nums[j];
            if(sum<target)
                j++;
            else if(sum>=target)
            {
                while(sum>=target){ //fixed size sw but miminal length here so use while here
              mini=min(mini,j-i+1);
                sum-=nums[i];
                i++;}
                j++;
            }
        }
        if(mini==1e9)
            return 0;
        else
        return mini;
    }
};