class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
     int n=nums.size();
        int sum=0;
        int maxi=INT_MIN;
        int m=nums[0].size();
        for(int i=0;i<n;i++)
        {
            sort(nums[i].begin(),nums[i].end());
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                maxi=max(maxi,nums[j][i]);
            }
            ///cout<<maxi<<endl;
            sum+=maxi;
        }
        return sum;
    }
};