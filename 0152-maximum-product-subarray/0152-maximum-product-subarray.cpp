class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=-1e9;
        int prod=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
         prod=prod*nums[i]; 
           maxi=max(maxi,prod);
            if(prod==0)
                prod=1;
        }
        prod=1;
        for(int i=n-1;i>=0;i--)
        {
            prod=prod*nums[i];
            maxi=max(maxi,prod);
            if(prod==0)
                prod=1;
        }
        return maxi;
    }
};