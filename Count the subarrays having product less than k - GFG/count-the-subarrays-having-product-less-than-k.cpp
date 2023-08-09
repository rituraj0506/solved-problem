//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long c=0;
        long long st=0,end=0;
        long long  prod=1;
        if(k<=1) return 0;
        while(end<a.size())
        {
            prod=prod*a[end];
            while(end<a.size() && prod>=k)
            {
             prod=prod/a[st];
             st++;
            }
            if(prod<k)
            {
                c+=end-st+1;
            }
            end++;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends