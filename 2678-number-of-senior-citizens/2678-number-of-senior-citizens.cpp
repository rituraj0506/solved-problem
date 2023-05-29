class Solution {
public:
    int countSeniors(vector<string>& details) {
       int c=0;
        for(auto it:details)
        {
            string ans=it.substr(11,2);
            int res=stoi(ans);
            if(res>60)
                c++;
        }
        return c;
    }
};