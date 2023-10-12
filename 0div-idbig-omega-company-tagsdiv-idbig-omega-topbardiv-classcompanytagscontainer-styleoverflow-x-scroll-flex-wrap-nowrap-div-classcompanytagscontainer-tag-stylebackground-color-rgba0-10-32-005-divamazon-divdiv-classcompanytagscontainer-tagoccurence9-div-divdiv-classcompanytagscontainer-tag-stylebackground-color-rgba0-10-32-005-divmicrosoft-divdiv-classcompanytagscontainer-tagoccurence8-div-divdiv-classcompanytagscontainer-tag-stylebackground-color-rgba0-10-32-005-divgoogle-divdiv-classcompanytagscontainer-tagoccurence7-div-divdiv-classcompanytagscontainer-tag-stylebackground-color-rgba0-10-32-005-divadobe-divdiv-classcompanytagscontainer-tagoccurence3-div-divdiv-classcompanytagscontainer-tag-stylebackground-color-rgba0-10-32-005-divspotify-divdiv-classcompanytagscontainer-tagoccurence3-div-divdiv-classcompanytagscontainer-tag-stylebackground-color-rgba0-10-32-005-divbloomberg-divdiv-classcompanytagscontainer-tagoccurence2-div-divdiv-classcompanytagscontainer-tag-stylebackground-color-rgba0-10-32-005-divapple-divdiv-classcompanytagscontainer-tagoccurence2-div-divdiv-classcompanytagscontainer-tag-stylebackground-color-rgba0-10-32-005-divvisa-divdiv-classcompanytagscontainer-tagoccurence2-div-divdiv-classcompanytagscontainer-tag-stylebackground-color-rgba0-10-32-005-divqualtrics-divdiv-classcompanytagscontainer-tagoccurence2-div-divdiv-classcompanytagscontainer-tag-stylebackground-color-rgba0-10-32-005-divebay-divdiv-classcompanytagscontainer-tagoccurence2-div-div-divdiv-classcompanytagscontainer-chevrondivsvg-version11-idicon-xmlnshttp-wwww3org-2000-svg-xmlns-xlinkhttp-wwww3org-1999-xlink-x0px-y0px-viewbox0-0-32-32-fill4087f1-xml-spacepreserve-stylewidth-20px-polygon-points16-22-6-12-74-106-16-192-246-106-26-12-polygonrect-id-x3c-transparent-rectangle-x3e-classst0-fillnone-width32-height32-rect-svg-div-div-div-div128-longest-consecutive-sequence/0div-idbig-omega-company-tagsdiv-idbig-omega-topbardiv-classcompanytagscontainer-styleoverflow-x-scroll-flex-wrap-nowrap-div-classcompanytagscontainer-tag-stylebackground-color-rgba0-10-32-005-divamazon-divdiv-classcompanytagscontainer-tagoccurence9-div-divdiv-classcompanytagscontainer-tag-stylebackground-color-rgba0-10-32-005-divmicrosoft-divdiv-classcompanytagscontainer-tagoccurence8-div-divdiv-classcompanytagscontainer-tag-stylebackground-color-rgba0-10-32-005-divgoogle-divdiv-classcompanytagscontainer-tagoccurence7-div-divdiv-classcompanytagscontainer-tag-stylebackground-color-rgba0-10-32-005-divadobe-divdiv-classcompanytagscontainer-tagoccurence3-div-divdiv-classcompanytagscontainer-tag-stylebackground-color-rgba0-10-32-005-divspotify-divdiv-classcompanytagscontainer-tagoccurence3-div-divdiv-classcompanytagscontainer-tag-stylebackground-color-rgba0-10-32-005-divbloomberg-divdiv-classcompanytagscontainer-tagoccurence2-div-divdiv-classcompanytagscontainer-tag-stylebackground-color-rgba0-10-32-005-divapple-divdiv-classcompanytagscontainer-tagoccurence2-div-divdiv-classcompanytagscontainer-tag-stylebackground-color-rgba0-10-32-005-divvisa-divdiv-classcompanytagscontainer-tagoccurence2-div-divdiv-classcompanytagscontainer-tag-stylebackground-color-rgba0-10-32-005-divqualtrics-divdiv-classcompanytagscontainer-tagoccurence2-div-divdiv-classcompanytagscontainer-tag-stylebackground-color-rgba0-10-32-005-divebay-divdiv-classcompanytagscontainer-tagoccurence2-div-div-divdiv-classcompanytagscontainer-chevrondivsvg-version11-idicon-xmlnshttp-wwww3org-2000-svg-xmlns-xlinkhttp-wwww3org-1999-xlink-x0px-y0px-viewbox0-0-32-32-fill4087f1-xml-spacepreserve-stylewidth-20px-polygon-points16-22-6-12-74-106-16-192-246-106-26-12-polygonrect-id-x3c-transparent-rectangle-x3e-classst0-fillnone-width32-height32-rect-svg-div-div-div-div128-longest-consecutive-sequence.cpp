class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        set<int>s;
        
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(auto it:s)
        {
            if(s.find(it-1)==s.end())
            {
                int x=it;
                int c=1;
                while(s.find(x+1)!=s.end())
                {
                    x++;
                    c++;
                }
              maxi=max(maxi,c);
            }
        }
        return maxi;
    }
};