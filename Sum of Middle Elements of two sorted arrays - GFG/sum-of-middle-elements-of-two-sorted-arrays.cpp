//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int arr1[], int arr2[], int n) {
        vector<int>ans(n+n,0);
        int i=n-1,j=n-1;
        int sum=0;
        int k=n+n-1;
        while(i>=0 && j>=0)
        {
            if(arr1[i]<arr2[j]){
            ans[k]=arr2[j];
            k--;
            j--;
            }
            else 
            {
             ans[k]=arr1[i];
              k--;
                i--;
            }
        }
        while(i>=0)
        {
           ans[k]=arr1[i];
           k--;
           i--;
           
        }
         while(j>=0)
        {
           ans[k]=arr2[j];
           k--;
           j--;
        }
        int n1=ans.size();
        sum+=ans[n1/2]+ans[n1/2-1];
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends