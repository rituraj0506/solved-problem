//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int nums[], int n) {
        int l=0,h=n-1;
         if(n==1)
            return nums[0];
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(mid>0&& mid<n-1)
            {
                if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                    return nums[mid];
                else if(nums[mid-1]>nums[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
            else if(mid==0)
            {
                if(nums[0]>nums[1])
                    return nums[0];
                else
                    return nums[1];
            }
            else if(mid==n-1)
            {
                if(nums[n-1]>nums[n-2])
                    return nums[n-1];
                else
                    return nums[n-2];
            }
          
        }
        return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends