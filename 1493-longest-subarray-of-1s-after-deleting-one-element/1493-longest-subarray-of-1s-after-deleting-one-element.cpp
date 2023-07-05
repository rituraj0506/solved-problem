class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int maxi=0;
        int c=0;
        while(j<n)
        {
            if(nums[j]==0)
                c++;
            
             if(c<=1)
            {
                maxi=max(maxi,j-i);
                j++;
            }
            else if(c>1)
            {
                while(c>1)
                {
                    if(nums[i]==0)
                        c--;
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};