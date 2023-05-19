class Solution {
public:
    int f(int i,int j,string &s, string &t,vector<vector<int>>&dp)
    {
        // if word1 is exhausted i comes at -1 and j is ro then two operation
        if(i<0)
            return j+1;
       if(j<0) // if word2 exhausted and i is at hos then three operation 2+1(i==s==2)
            return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j])
            return dp[i][j]= 0+f(i-1,j-1,s,t,dp);// we dont need any operation like insert dele 
        else{
      return dp[i][j]=min({1+f(i,j-1,s,t,dp),1+f(i-1,j,s,t,dp),1+f(i-1,j-1,s,t,dp)});
        
            }
    }
    // horse  ros we insert s hypothetically in word1 and shrink t;
     // or we del e from word1 shrink word1
    // or we replace e in word1 with s and shrink both;
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int n1=word2.size();
        vector<vector<int>>dp(n,vector<int>(n1,-1));
        return f(n-1,n1-1,word1,word2,dp);
    }
};