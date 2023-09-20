class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0,j;
        string res;
        while(i<n)
        {
          while(i<n && s[i]==' ') i++;
            
            if(i>=n) break;
            
            j=i;
            
            while(j<n && s[j]!=' ') j++;
            
            string ans=s.substr(i,j-i);
            if(res.size()==0)
             res=ans;
            else
                res=ans+' '+res;
            
            i=j+1;
        }
        return res;
    }
};