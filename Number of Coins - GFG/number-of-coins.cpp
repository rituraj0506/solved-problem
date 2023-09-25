//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int f(int ind,int coins[],int tar,vector<vector<int>>&dp)
	{
	    if(ind==0){
	        if(tar%coins[ind]==0)
	        return tar/coins[ind];
	        else
	        return 1e9;
	    }
	    if(dp[ind][tar]!=-1) return dp[ind][tar];
	    int take=1e9,nott=0;
	    nott=0+f(ind-1,coins,tar,dp);
	    if(coins[ind]<=tar)
	    take=1+f(ind,coins,tar-coins[ind],dp);
	    return dp[ind][tar]=min(take,nott);
	}
	int minCoins(int coins[], int m, int tar) 
	{ 
	    vector<vector<int>>dp(m,vector<int>(tar+1,-1));
	   int ans= f(m-1,coins,tar,dp);
	   if(ans>=1e9)
	   return -1;
	   else
	   return ans;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends