//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    long long ans=1e9;
    sort(a.begin(),a.end());
    for(int i=0;i<=n-m;i++)
    {
        long long minv=a[i];
        long long maxv=a[i+m-1];
        long long diff=maxv-minv;
        if(diff<ans)
        {
            ans=diff;
        }
    }
    return ans;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends