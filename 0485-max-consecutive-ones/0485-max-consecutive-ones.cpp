class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=-1e9;
        int c=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                c++;
          maxi=max(maxi,c);
            if(nums[i]==0)
                c=0;
        }
        return maxi;
    }
};