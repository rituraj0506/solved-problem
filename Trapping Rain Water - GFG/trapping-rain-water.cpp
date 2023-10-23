//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
    long long ans=0;
    long long l=0,h=n-1;
    long long lmax=0,rmax=0;
    while(l<=h)
    {
       if(arr[l]<=arr[h])
       {
           if(lmax<arr[l])
           {
               lmax=arr[l];
           }
           else{
               ans+=lmax-arr[l];
               l++;
           }
       }
       else{
           if(rmax<arr[h])
           {
               rmax=arr[h];
           }
           else{
               ans+=rmax-arr[h];
               h--;
           }
       }
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends