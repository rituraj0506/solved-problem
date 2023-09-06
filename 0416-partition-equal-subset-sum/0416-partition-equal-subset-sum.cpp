class Solution {
public:
    bool f1(int ind,vector<int>& nums,int target, vector<vector<int>>&dp)
    {
        if(ind==0) return (nums[0]==target);
        if(target==0) return true;
        if(dp[ind][target]!=-1) return dp[ind][target];
        int nott=f1(ind-1,nums,target,dp);
        int take=0;
        if(nums[ind]<=target)
            take=f1(ind-1,nums,target-nums[ind],dp);
        return dp[ind][target]=take||nott;
    }
    int f(vector<int>& nums,int target)
    {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return f1(n-1,nums,target,dp);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
         sum+=nums[i];
        }
        if(sum%2!=0) return false;
        int target=sum/2;
        return f(nums,target);
    }
};