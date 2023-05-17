class Solution {
public:
      int f(int ind,int ind1,string&text1,string&text2,vector<vector<int>>&dp)
    {
        if(ind<0||ind1<0) return 0;
        if(dp[ind][ind1]!=-1) return dp[ind][ind1];
        if(text1[ind]==text2[ind1])
        return dp[ind][ind1]=1+f(ind-1,ind1-1,text1,text2,dp);
        return  dp[ind][ind1]=0+max(f(ind-1,ind1,text1,text2,dp),f(ind,ind1-1,text1,text2,dp));
            
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
       return f(m-1,n-1,text1,text2,dp);
    }
    
    int longestPalindromeSubseq(string s) {
      string t=s;
       reverse(t.begin(),t.end());
        return longestCommonSubsequence(s,t);
    }
    int minInsertions(string s) {
        return s.size()-longestPalindromeSubseq(s);
    }
};