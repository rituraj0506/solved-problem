class Solution {
public:
    int dp[10001];
    int f(int i,vector<int>a)
    {
        if(i<0) return 0;
        if(i==0) return a[i];
        if(dp[i]!=-1) return dp[i];
        int take=a[i]+f(i-2,a);
        int nott=0+f(i-1,a);
        return dp[i]=max(take,nott);
    }
    int deleteAndEarn(vector<int>& nums) {
       int n=nums.size();
       vector<int> arr(10001);// indexing 0 to 10^4
       memset(dp,-1,sizeof(dp));
        for (int i=0;i<nums.size();i++){
            arr[nums[i]]+=nums[i];
        }
        return  f(*max_element(nums.begin(),nums.end()),arr);
    }
};