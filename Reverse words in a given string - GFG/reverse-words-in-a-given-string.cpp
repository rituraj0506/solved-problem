//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        int n=s.size();
        int i=0,j;
        string res;
        while(i<n)
        {
          while(i<n && s[i]=='.') i++;
            
            if(i>=n) break;
            
            j=i;
            
            while(j<n && s[j]!='.') j++;
            
            string ans=s.substr(i,j-i);
            if(res.size()==0)
             res=ans;
            else
                res=ans+'.'+res;
            
            i=j+1;
        }
        return res;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends