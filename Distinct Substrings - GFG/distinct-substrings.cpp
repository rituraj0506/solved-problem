//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    map<string,int>m;
    for(int i=0;i<s.size()-1;i++)
    {
        string ans="";
        ans.push_back(s[i]);
        ans.push_back(s[i+1]);
        m[ans]++;
    }
    return m.size();
}