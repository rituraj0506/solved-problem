class Solution {
public:
    int findMin(vector<int>& nums) {
    set<int>s;
    for(auto i:nums)
     {
      s.insert(i);
      }
       vector<int>ans;
        for(auto it:s)
        {
            ans.push_back(it);
        }
    int n=ans.size();
    int l=0, r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
             int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
           
            if(ans[mid]<=ans[prev]&&ans[mid]<=ans[next])
                return ans[mid];
            if(ans[mid]<=ans[r]) 
                 r=mid-1;
             else if(ans[0]<=ans[mid])
                l=mid+1;
            
        }
        return 0;
    }
};