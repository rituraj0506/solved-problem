class Solution {
public:
    int countSubstrings(string s) {
      vector<vector<bool>>dp(s.size(),vector<bool>(s.size(),false));
        int c=0;
       // diag sta ho raha first row se khatam last col per 
        for(int g=0;g<s.size();g++)
        {
            for(int i=0,j=g;j<s.size();i++,j++)
            {
              if(g==0)
              {
                  dp[i][j]=true;
              }
               else if(g==1)
                {
                    if(s[i]==s[j])
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                }
                else{
                    if(s[i]==s[j]&& dp[i+1][j-1]==true)
                       dp[i][j]= true;
                  else
                      dp[i][j]=false;
                }
                if(dp[i][j])
                {
                    c++;
                }
             }
        }
        return c;
    }
};