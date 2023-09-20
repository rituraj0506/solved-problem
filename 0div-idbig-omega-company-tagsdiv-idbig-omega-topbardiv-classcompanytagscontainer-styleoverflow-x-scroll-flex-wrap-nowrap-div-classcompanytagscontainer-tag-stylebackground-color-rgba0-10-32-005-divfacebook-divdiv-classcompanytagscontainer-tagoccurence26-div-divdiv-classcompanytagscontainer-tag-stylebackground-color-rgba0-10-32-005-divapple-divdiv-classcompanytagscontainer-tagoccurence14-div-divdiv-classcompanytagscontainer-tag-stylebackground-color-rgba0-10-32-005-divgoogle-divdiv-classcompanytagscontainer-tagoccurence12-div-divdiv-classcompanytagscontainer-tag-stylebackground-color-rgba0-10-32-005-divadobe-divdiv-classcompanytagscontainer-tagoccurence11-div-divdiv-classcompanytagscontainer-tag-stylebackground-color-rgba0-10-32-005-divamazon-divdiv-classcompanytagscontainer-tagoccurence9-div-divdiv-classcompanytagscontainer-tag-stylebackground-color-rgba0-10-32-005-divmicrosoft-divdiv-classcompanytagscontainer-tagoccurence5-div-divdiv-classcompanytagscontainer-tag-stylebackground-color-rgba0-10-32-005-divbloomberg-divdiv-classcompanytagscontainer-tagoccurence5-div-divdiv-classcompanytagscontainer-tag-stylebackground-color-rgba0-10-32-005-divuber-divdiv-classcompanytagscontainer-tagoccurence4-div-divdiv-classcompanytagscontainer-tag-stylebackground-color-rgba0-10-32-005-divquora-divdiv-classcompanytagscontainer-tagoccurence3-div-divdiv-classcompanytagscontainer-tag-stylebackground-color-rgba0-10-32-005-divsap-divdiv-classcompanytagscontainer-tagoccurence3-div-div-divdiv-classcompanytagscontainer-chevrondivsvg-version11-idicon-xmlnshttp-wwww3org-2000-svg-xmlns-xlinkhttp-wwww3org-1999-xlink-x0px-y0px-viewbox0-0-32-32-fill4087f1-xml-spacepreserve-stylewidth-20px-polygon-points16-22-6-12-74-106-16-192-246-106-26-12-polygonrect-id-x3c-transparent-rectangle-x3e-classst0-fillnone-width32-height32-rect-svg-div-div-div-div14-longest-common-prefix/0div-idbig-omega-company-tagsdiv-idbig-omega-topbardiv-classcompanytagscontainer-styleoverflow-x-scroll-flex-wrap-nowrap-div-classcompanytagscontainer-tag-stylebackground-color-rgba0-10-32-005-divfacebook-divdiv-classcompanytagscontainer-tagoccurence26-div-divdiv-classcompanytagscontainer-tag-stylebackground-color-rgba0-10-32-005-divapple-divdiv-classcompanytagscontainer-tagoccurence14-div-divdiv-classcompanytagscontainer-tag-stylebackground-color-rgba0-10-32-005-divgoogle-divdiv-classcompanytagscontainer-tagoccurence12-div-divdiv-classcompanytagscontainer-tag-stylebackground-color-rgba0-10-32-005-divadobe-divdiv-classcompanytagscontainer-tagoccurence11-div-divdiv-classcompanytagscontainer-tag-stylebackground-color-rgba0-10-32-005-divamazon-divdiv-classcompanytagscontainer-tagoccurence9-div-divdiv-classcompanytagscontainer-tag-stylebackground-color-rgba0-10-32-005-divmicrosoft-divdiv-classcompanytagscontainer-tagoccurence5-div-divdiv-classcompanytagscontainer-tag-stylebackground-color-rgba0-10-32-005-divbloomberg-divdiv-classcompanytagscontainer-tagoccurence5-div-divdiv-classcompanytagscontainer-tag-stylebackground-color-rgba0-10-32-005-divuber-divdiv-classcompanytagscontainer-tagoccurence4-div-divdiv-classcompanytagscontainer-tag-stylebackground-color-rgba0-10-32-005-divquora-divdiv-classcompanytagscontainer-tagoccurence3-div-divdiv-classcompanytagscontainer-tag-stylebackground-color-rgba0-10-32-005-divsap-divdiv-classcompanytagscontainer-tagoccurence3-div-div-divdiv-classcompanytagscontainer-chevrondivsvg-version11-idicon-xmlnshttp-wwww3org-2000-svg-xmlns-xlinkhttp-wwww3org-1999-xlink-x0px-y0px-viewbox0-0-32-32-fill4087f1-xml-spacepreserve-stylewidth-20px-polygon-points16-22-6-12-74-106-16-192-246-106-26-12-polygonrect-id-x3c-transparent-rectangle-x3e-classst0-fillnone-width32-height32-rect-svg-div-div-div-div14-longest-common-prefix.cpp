class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        // if(strs.size()==0)
        //     retrun "";
         if(strs.size()==0)
            return "";
        if(strs.size()==1)
           return strs[0];
        sort(strs.begin(),strs.end());
        int ans=min(strs[0].size(),strs[0].size());
        string fs=strs[0];
         string ls=strs[n-1];
        int i=0;
        string res;
        while(i<=ans&&fs[i]==ls[i])
        {
            i++;
            res=fs.substr(0,i);
        }
        return res;
    }
};