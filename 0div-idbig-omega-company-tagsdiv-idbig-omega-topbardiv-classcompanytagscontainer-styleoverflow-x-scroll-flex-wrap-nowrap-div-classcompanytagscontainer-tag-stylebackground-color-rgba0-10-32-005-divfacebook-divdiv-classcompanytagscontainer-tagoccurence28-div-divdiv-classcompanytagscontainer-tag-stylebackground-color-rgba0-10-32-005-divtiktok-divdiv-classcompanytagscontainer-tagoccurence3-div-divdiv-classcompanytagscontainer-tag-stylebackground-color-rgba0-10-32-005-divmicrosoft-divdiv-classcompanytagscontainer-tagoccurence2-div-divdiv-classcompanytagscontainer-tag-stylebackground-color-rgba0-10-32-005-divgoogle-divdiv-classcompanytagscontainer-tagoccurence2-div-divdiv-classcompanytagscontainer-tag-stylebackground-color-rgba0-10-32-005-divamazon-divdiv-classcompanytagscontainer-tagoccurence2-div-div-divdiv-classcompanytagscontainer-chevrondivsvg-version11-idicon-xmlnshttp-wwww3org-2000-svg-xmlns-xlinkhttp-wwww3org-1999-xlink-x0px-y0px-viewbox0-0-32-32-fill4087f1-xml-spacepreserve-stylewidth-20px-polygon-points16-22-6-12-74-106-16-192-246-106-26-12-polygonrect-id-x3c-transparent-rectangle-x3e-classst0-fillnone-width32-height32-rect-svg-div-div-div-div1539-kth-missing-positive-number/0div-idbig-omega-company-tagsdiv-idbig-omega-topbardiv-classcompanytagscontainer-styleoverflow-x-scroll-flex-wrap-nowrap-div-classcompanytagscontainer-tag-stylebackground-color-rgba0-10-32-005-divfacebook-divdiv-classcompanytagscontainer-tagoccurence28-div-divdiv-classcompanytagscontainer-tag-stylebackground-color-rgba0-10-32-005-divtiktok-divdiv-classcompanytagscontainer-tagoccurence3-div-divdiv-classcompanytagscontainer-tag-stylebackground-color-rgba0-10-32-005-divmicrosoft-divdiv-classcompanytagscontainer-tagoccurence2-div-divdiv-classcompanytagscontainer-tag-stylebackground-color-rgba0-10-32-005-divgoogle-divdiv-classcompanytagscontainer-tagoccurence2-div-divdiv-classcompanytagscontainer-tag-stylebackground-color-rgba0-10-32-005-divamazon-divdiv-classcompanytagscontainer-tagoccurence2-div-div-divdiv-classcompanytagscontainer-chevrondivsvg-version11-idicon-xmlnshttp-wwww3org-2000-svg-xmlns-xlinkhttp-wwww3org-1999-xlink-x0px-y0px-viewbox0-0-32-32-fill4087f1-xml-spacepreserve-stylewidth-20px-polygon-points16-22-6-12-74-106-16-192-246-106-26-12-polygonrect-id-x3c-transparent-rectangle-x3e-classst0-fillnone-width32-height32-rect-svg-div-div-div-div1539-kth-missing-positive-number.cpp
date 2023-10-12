class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
//https://leetcode.com/problems/kth-missing-positive-number/discuss/1004437/C%2B%2B-Optimized-Solution-with-Detailed-Explanation-C%2B%2B-100Faster-0-ms 
// using bs good explanation
        
        
        // for(auto it:arr)
        // {
        //     if(it<=k)
        //         k++;
        // }
        // return k;
        
        // using binary search
        
        int n=arr.size();
        int l=0,h=n-1;
        while(l<=h)
        {
         int mid=l+(h-l)/2;
         if((arr[mid]-(mid+1))<k)
         {
             l=mid+1;
         }
            else
            h=mid-1;
        }
        return l+k;
    }
};