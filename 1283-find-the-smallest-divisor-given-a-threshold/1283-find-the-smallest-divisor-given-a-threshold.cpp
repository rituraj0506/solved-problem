class Solution {
public:
    int isvalid(vector<int>& nums,int mid)
    {
        int n=nums.size();
        int c=0;
         for(int i=0;i<nums.size();i++)
         {
            c+=(nums[i]%mid==0)?(nums[i]/mid):(nums[i]/mid)+1;
         }
        
        return c;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
      //  int st=*max_element(nums.begin(),nums.end());
        // divide the range b/w 1-maxele in array
        int st=1;
        int res=-1;
        int n=nums.size();
      
        int end=*max_element(nums.begin(),nums.end());;
        while(st<=end){
            int mid=st+(end-st)/2;
            int c=isvalid(nums,mid);
            if(c<=threshold)
            {
                res=mid;
                end=mid-1;
            }
            else
                st=mid+1;
        }
        return res;
    }
};