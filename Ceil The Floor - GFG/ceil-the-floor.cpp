//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int ceil=-1,floor=-1;
    sort(arr,arr+n);
    int l=0,h=n-1; 
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        return {arr[mid],arr[mid]};
        if(arr[mid]<x)
        {
            floor=arr[mid];
            l=mid+1;
        }
        else if(arr[mid]>x)
        {
            ceil=arr[mid];
            h=mid-1;
        }
    }
    return {floor,ceil};
}