//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isvalid(int a[],int mid,int n,int m)
    {
        int stud=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>mid)
            {
                stud++;
                sum=a[i];
            }
            if(stud>m)
            return false;
        }
        return true;
}
  
    int findPages(int a[], int n, int m) 
    {
        int st=*max_element(a,a+n);
        int last=0;
        int res=-1;
        if(n<m) return -1;
        for(int i=0;i<n;i++)
        {
            last+=a[i];
        }
        int end=last;
        while(st<=last)
        {
            int mid=st+(last-st)/2;
            if(isvalid(a,mid,n,m))
            {
                res=mid;
                last=mid-1;
            }
            else
            st=mid+1;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends