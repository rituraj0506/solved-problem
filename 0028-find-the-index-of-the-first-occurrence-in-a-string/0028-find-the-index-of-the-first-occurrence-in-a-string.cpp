class Solution {
public:
    int strStr(string haystack, string needle) {
        unordered_map<char,int>m;
        int n=haystack.size();
        int n1=needle.size();
        int i=0,j=0;
        string s;
         while(j<n)
         {
           s+=haystack[j];
             if(j-i+1<n1)
                 j++;
             else if(j-i+1==n1)
             {
                if(s==needle)
                  return i;
                s.erase(0,1);// delete one character from index 0
                 i++;
                 j++;
             }
         }
        return -1;
    }
};