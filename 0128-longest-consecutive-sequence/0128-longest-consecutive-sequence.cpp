class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>s;
        int maxi=1;
        int n=nums.size();
         if(n==0) return 0;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(auto it:s)
        {
            if(s.find(it-1)==s.end())
            {
                int c=1;
                int x=it;
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