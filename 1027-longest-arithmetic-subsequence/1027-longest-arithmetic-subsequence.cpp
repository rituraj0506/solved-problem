class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>dp[n+1];
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
               int diff=nums[i]-nums[j];
                int c=1;
                
                if(dp[j].count(diff))
                    c=dp[j][diff];
                
                dp[i][diff]=1+c;
                
                ans=max(ans,dp[i][diff]);
            }
        }
        return ans;
    }
};