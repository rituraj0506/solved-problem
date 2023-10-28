//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  int lcs(int i,int j,string&s,string&t, vector<vector<int>>&dp)
  {
      if(i<0||j<0)  return 0;
      if(dp[i][j]!=-1) return dp[i][j];
      if(s[i]==t[j])
       return dp[i][j]=1+lcs(i-1,j-1,s,t,dp);
       else
       return dp[i][j]=0+max(lcs(i-1,j,s,t,dp),lcs(i,j-1,s,t,dp));
  }
    int lps(string &s)
    {
         int n=s.size();
        string t=s;
        reverse(t.begin(),t.end());
         int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       return lcs(n-1,m-1,s,t,dp);
    }
    int minimumNumberOfDeletions(string S) { 
       int n=S.size();
       return n-lps(S);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends