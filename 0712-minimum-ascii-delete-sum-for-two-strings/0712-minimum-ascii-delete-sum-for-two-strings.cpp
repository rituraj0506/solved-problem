class Solution {
public:
    int f(int i,int j,string &s1,string &s2,vector<vector<int>>&dp)
    {
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j])
            return dp[i][j]=(int)s1[i]+f(i-1,j-1,s1,s2,dp);
        else
            return dp[i][j]=max(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp));
    }
    int minimumDeleteSum(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        int sum=0,sum1=0;
        for(auto i:s1)
            sum+=i;
        for(auto i:s2)
            sum1+=i;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return (sum+sum1)-2*f(m-1,n-1,s1,s2,dp);
    }
};