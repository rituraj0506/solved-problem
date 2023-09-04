//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int a[], int n , int x )
    {
      int l=0,h=n-1;
      int fo=-1,lo=-1;
      while(l<=h)
      {
          int mid=l+(h-l)/2;
          if(a[mid]==x)
          {
              fo=mid;
              h=mid-1;
          }
          else if(a[mid]<x)
          {
              l=mid+1;
          }
          else
          h=mid-1;
      }
      l=0,h=n-1;
       while(l<=h)
      {
          int mid=l+(h-l)/2;
          if(a[mid]==x)
          {
              lo=mid;
              l=mid+1;
          }
          else if(a[mid]<x)
          {
              l=mid+1;
          }
          else
          h=mid-1;
      }
      return {fo,lo};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends