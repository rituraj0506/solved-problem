//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int mini=1e9;
        unordered_map<int,int>m;
        int n=str.size();
        for(int i=0;i<patt.size();i++)
        {
          m[patt[i]]=i;  
        }
         for(int i=0;i<str.size();i++)
         {
             if(m.find(str[i])!=m.end())
             return i;
         }
         return -1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends