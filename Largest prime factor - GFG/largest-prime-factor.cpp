//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
    long long maxi=-1e9;
    vector<long long>ans;
    while(n%2==0)
    {
       maxi=2;
       n=n/2;
    }
    
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
           maxi=i; 
           n=n/i;
        }
    }
    
    if(n>2)
     maxi=n;
    
    return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends