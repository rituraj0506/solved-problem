//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int f(int prev,int ind,int n,int arr[],vector<vector<int>>&dp)
	{
	    if(ind==n) return 0;
	    if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
	    int nott=0+f(prev,ind+1,n,arr,dp);
	    int take=-1e9;
	    if(prev==-1||arr[prev]<arr[ind])
	    take=f(ind,ind+1,n,arr,dp)+arr[ind];
	    return dp[ind][prev+1]=max(nott,take);
	}
	int maxSumIS(int arr[], int n)  
	{  
	  vector<vector<int>>dp(n,vector<int>(n+1,-1));
	  int prev=-1;
	  return f(prev,0,n,arr,dp);
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends