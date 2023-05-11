class Solution {
public:// same as longest common subsequence
    int f(int ind1,int ind2,vector<int>& nums1, vector<int>& nums2,vector<vector<int>>&dp)
    {
        if(ind1<0||ind2<0)
            return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(nums1[ind1]==nums2[ind2])
            return dp[ind1][ind2]=1+f(ind1-1,ind2-1,nums1,nums2,dp);
        else
            return dp[ind1][ind2]=0+max(f(ind1-1,ind2,nums1,nums2,dp),f(ind1,ind2-1,nums1,nums2,dp));
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
         int m=nums1.size();
         int n=nums2.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(m-1,n-1,nums1,nums2,dp);
    }
};