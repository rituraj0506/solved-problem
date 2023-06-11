class Solution {
public:
    int f(int i,int j,vector<int>& nums1,vector<int>& nums2,vector<vector<int>>&dp)
    {
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int nott=0,take=0;
        nott=f(i-1,j-1,nums1,nums2,dp);
        if(nums1[i]==nums2[j])
        take=1+f(i-1,j-1,nums1,nums2,dp);
        else
            take=max(f(i-1,j,nums1,nums2,dp),f(i,j-1,nums1,nums2,dp));
        return dp[i][j]=max(nott,take);
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int n1=nums2.size();
        vector<vector<int>>dp(n,vector<int>(n1,-1));
       return f(n-1,n1-1,nums1,nums2,dp);
    }
};