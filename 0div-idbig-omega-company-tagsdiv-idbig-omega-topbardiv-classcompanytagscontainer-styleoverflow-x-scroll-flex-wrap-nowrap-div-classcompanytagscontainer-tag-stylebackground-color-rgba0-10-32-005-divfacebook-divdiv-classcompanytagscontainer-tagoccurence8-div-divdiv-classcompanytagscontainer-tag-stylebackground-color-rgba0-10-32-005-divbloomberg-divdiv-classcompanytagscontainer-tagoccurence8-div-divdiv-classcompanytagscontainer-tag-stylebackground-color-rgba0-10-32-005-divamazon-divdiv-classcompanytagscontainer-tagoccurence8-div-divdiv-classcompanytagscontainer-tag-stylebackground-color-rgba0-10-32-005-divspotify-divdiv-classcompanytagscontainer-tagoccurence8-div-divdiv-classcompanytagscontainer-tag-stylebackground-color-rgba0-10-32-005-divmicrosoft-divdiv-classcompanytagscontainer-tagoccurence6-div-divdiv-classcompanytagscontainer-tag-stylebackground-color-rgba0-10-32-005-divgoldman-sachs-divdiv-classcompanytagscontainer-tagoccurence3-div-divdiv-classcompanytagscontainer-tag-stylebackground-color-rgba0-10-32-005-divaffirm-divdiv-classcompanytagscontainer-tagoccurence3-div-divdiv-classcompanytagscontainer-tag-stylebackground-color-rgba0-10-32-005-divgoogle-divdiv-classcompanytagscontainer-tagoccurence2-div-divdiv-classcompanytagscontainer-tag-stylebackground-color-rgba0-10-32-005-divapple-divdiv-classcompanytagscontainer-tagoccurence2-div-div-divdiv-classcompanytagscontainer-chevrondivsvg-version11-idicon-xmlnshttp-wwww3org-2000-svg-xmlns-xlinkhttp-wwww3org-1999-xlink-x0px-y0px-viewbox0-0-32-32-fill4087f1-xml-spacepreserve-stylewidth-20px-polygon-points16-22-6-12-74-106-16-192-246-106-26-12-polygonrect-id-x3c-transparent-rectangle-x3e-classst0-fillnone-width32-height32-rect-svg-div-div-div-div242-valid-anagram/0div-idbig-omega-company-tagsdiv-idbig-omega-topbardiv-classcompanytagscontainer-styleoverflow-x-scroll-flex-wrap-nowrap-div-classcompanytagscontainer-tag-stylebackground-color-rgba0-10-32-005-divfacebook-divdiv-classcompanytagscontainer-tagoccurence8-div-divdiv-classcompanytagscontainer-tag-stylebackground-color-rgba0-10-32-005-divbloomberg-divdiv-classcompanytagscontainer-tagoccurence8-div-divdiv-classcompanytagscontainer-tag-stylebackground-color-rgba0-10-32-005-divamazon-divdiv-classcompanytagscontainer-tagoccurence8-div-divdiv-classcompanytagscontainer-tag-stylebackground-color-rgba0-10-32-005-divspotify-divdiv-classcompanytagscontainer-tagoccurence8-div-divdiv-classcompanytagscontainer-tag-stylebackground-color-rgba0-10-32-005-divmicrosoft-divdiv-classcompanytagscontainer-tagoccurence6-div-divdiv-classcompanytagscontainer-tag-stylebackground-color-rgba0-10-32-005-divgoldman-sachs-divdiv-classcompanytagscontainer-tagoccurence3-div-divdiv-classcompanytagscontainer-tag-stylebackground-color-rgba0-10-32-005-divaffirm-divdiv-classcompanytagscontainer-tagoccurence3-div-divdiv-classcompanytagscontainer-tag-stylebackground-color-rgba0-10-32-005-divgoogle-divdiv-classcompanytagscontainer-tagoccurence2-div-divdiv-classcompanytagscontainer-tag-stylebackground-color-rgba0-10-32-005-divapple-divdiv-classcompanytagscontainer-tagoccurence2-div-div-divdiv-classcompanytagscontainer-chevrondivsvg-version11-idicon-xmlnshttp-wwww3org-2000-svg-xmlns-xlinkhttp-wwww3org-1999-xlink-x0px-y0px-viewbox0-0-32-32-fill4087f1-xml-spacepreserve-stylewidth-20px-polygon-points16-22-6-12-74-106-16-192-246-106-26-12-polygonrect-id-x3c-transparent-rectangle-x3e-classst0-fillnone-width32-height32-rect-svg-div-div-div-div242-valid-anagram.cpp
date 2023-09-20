class Solution {
public:
    bool isAnagram(string s, string t) {
        // t(c)=o(n) && s(c)=o(1) becoz in hash table only 26 letter
       unordered_map<char,int>m,m1;
        int n=s.size();
        int n1=t.size();
        if(n!=n1) return false;
        for(int i=0;i<n;i++)
        {
          m[s[i]]++;
          m1[t[i]]++;
        }
        if(m==m1)
            return true;
        else
            return false;
    }
};