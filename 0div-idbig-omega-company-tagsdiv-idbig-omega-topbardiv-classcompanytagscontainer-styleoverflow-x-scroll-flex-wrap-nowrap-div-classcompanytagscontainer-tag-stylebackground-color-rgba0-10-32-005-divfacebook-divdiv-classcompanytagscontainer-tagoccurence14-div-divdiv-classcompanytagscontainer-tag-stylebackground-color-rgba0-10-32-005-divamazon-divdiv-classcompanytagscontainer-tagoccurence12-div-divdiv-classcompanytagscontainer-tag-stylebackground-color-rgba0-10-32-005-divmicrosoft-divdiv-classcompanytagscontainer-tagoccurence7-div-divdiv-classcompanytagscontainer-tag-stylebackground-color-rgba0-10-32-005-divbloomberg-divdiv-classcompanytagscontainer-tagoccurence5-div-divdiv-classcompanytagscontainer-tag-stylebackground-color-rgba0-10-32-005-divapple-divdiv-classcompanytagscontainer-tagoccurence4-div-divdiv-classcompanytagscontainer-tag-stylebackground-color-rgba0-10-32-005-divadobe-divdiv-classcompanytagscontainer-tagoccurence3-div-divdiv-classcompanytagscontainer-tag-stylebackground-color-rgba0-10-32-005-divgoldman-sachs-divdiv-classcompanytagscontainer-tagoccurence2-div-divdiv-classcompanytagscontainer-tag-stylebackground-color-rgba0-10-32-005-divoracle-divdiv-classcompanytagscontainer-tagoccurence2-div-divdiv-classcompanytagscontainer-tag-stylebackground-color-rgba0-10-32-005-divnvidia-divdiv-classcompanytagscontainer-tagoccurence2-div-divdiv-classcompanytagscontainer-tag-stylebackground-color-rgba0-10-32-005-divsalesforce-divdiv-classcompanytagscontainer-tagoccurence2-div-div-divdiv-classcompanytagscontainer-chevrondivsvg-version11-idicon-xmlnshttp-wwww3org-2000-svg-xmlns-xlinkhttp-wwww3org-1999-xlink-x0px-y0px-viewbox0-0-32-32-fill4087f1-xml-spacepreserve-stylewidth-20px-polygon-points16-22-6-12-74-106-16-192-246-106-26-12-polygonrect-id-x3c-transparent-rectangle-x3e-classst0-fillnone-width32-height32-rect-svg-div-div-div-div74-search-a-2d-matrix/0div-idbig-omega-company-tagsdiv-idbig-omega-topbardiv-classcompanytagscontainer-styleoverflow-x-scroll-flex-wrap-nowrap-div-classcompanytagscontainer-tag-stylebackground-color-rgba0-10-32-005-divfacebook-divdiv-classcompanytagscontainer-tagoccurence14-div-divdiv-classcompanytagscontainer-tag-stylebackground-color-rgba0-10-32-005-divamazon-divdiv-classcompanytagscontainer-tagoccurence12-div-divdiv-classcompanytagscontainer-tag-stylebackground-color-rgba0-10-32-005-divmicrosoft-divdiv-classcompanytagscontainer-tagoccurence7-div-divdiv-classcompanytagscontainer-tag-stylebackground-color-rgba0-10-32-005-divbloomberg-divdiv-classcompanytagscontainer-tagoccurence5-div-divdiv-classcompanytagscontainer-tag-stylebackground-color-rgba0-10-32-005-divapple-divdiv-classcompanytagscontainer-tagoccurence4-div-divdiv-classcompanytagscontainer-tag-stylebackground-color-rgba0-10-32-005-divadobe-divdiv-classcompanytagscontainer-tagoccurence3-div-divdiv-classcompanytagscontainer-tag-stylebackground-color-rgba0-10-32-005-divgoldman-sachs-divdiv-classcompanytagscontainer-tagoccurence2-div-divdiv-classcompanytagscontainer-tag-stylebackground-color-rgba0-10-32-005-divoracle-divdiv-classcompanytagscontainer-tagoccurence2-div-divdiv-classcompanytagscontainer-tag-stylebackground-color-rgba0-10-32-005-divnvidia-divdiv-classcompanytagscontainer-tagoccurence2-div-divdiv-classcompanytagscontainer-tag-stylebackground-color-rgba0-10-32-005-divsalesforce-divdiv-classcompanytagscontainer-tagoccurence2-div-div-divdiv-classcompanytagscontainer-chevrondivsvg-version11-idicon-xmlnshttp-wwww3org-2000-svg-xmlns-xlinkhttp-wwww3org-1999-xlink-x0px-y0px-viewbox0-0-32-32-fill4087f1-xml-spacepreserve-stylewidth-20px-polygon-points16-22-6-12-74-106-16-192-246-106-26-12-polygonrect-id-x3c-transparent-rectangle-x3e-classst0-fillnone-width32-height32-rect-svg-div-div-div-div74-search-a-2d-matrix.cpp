class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m=arr[0].size();
        int n=arr.size();
         int r=0,c=m-1; 
        while(r<n && c>=0)
        {
         if(arr[r][c]==target)
             return true;
            else if(arr[r][c]<target)
                r++;
            else if(arr[r][c]>target)
                c--;
        }
        return false;
    }
};