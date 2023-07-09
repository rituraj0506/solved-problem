class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int reachatlast=0;
       
        for(int i=0;i<n;i++)
        {
             if(reachatlast<i) return false;
           reachatlast=max(reachatlast,nums[i]+i);
        }
        return true;
    }
};