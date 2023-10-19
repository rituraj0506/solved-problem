//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
    //     int l=0,h=n-1;
    //     if(arr[0]!=arr[1])
    //      return arr[0];
    //  else if(arr[n-1]!=arr[n-2]) return arr[n-1];
    //     while(l<=h)
    //     {
    //       int mid=l+(h-l)/2;
    //       if(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1])
    //       return arr[mid];
    //      else if((mid%2==0||arr[mid]==arr[mid-1])||(mid%2==1 || arr[mid]==arr[mid+1]))
    //       l=mid+1;
    //       else
    //       h=mid-1;
    //     }
    //     return -1;
        int ans=arr[0];
        for(int i=1;i<n;i++)
        {
           ans^=arr[i];
        }
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
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends