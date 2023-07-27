class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int n1=t.size();
        // one char of s is mapped two chr of t then it is false
        unordered_map<char,int>m,m1;
         for(int i=0;i<n;i++)
         {
             m[s[i]]=i+1;
         }
          for(int i=0;i<n1;i++)
         {
             m1[t[i]]=i+1;
         }
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]!=m1[t[i]])
                return false;
        }
        return true;
    }
};