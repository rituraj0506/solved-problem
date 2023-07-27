class Solution {
public:
    bool canConstruct(string r, string m) {
        int n=r.size();
        int n1=m.size();
        map<char,int>m1;
        for(int i=0;i<n1;i++)
        {
         m1[m[i]]++;     
        }
        
         for(int i=0;i<n;i++)
        {
         if(m1[r[i]]>0)
             m1[r[i]]--;
             else
            return false;
        }
            return true;
    }
};