class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();
         unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(auto it:s)
        {
           if(s.find(it-1)==s.end())
           {
              auto x=it;
             int c=1; 
               while(s.find(x+1)!=s.end())
               {
                   c++;
                   x++;
               }
               maxi=max(maxi,c);
           }
        }
        return maxi;
    }
};