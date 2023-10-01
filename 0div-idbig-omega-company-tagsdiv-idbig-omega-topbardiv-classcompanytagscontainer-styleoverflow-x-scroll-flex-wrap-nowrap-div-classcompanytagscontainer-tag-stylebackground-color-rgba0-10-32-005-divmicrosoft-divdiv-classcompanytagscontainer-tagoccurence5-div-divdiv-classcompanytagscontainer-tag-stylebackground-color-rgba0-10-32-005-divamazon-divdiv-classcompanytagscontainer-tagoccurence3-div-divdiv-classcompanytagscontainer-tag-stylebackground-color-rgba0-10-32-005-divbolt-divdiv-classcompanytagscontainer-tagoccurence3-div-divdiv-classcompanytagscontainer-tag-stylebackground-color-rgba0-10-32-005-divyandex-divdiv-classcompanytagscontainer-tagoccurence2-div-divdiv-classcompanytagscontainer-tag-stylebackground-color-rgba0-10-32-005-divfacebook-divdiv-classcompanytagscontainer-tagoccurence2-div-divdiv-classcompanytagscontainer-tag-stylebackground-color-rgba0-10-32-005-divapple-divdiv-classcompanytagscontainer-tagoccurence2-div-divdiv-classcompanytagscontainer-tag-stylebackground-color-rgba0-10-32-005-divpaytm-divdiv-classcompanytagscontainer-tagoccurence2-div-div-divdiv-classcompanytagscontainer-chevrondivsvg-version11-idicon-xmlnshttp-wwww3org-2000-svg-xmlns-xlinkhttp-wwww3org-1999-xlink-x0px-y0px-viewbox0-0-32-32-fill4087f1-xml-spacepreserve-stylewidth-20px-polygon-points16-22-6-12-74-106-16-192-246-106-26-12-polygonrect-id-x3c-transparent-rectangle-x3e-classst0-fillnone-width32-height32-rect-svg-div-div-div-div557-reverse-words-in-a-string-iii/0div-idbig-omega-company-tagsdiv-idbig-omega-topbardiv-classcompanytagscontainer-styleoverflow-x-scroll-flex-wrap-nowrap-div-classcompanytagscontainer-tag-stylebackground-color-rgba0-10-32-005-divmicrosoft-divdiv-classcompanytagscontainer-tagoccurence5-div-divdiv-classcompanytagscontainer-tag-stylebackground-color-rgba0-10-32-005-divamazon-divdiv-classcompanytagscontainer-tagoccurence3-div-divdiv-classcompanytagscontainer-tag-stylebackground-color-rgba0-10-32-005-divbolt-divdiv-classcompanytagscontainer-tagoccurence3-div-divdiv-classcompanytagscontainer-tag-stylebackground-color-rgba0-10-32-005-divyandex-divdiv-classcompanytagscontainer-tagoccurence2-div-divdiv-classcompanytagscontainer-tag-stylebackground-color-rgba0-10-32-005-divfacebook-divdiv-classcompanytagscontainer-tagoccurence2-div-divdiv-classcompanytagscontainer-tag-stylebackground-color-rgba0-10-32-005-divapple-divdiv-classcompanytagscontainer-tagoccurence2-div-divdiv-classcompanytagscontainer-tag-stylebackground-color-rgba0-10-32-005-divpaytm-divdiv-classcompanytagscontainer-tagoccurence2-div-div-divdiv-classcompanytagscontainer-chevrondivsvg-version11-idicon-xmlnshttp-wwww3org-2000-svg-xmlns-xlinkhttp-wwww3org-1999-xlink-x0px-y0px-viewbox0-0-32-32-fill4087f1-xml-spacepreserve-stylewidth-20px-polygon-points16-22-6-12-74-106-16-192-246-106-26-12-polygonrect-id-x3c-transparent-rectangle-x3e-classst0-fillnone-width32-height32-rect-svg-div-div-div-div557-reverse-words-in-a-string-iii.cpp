class Solution {
public:
    string reverseWords(string s) {
        string ans,res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
             ans+=s[i];
            }
            else{
                reverse(ans.begin(),ans.end());
                res+=ans;
                res+=' ';
                ans.clear();
            }
        }
  // after last word contest no ' ' reverse last word and add it
        reverse(ans.begin(),ans.end());
        res+=ans;
        return res;
    }
};