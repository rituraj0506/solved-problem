class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        
      vector<int>v(m+n,0);// necessary
        
        while(i>=0&&j>=0)
        {
            if(nums1[i]<nums2[j]){
                v[k]=nums2[j];
                k--;
                j--;
            }
            else{
                v[k]=nums1[i];
                k--;
                i--;
            }
        }
        
        while(i>=0){
            v[k]=nums1[i];
            k--;i--;
        }
        while(j>=0){
            v[k]=nums2[j];
            k--;
            j--;
        }
        
    // Return the result
        int len=m+n;
        return len%2?v[len/2]:(v[len/2]+v[len/2-1])/2.0;
        
    }
};