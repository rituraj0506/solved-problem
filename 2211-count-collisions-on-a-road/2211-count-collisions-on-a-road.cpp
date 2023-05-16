class Solution {
public:
    int countCollisions(string s) {
       int n=s.size();
        int l=0,r=n-1;
        int c=0;
        while(l<n&&s[l]=='L')
            l++;
        while(r>=0&&s[r]=='R')
            r--;
        for(int i=l;i<=r;i++)
        {
            if(s[i]!='S')
                c++;
        }
        return c;
    }
};