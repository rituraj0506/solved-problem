class Solution {
public:
    int f(int ind1,int ind2,string&word1,string&word2,vector<vector<int>>&dp)
    {
        if(ind1<0||ind2<0) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(word1[ind1]==word2[ind2])
    return dp[ind1][ind2]=1+f(ind1-1,ind2-1,word1,word2,dp);
        else
     return dp[ind1][ind2]=0+max(f(ind1-1,ind2,word1,word2,dp),f(ind1,ind2-1,word1,word2,dp));
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
    vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=f(m-1,n-1,word1,word2,dp);
        return (m+n)-2*(ans);
    }
};