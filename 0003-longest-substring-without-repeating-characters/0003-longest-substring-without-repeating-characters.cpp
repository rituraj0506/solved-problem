class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>m;
        int n=s.size();
        int i=0,j=0;
        int maxi=0;
        while(j<n)
        {
          m[s[j]]++;
            if(m[s[j]]<1)
                j++;
            else if(m[s[j]]==1)
            {
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(m[s[j]]>1)
            {
                while(m[s[j]]>1)
                {
                    m[s[i]]--;
                    // if(m[s[i]]==0)
                    //     m.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};