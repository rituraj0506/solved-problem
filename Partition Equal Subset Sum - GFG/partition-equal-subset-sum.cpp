//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool f(int ind,int arr[],int tar, vector<vector<int>>&dp)
    {
        if(ind==0) return (arr[0]==tar);
       // if(tar==0) return true;
        if(dp[ind][tar]!=-1) return dp[ind][tar];
        int nott=f(ind-1,arr,tar,dp);
        int take=0;
        if(arr[ind]<=tar)
        take=f(ind-1,arr,tar-arr[ind],dp);
        return dp[ind][tar]=take||nott;
    }
    int equalPartition(int N, int arr[])
    {
       int sum=0;
     for(int i=0;i<N;i++)
     {
        sum+=arr[i]; 
     }
     if(sum%2!=0) return 0;
     int tar=sum/2;
     vector<vector<int>>dp(N,vector<int>(tar+1,-1));
     return f(N-1,arr,tar,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends