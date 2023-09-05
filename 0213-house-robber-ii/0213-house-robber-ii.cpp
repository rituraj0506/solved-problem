class Solution {
public:
  int f(int ind,vector<int>& nums,vector<int>&dp)
    {
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
          int take=nums[ind]+f(ind-2,nums,dp);
          int nott=0+f(ind-1,nums,dp);
        return dp[ind]=max(take,nott);
    }
    int rob1(vector<int>&ans)
    {
       int n=ans.size();
       vector<int>dp(n+1,-1);
      return f(n-1,ans,dp); 
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans,ans1;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            ans.push_back(nums[i]);
            if(i!=n-1)
            ans1.push_back(nums[i]);
        }
        return max(rob1(ans),rob1(ans1));
    }
};