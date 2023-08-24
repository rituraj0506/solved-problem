class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>v(numRows);
        int flag=0;
        if(numRows==1) return s;
        int i=0;
        for(auto ch:s)
        {
            v[i]+=ch;
            if(i==0 || i==numRows-1)
                flag=!flag;
            if(flag==1)
            {
                i++;
            }
            else
                i--;
        }
        string ans="";
        for(auto it:v)
        {
            ans+=it;
        }
        return ans;
    }
};