class Solution {
public:
    int nways(int i,string&s,vector<int>&dp)
    {
        if(i>=s.size()) return 1;
        else if(s[i]=='0') return 0;
        else if(i==s.size()-1) return 1;
        if(dp[i]!=-1) return dp[i];
        else if(s[i]=='1'||(s[i]=='2'&&(s[i+1]>=48 && s[i+1]<=54)))
            return dp[i]=nways(i+1,s,dp)+nways(i+2,s,dp);
        else
            return dp[i]=nways(i+1,s,dp);
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n,-1);
       return nways(0,s,dp); 
    }
};