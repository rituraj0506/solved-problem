//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int distinctIds(int arr[], int n, int m)
    {
       // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        if(m>n) return 0;
       unordered_map<int,int>mp;
        int c=0;
        for(int i=0;i<n;i++)
         {
             mp[arr[i]]++;
         }
       vector<int>ans;
       for(auto it:mp)
       {
           ans.push_back(it.second);
       }
       sort(ans.begin(),ans.end());
       
       int i=0;
       while(m>0)
       {
          m=m-ans[i];
          if(m>=0)
          {
          c++;
          }
          i++;
       }
       return mp.size()-c;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
          cin>>arr[i];
        }
    
    	int m ;
    	cin >> m;
        Solution ob;
    	cout << ob.distinctIds(arr, n, m) << endl;
    }
	return 0;
}
// } Driver Code Ends