//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    
    bool knows(vector<vector<int> >& M,int a, int b)
    {
       //check if a knows b  
       if(M[a][b]==1) return true;
         else
        return false;
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        
        while(st.size()>1)
        {
        int a=st.top();
            st.pop();
            
         int b=st.top();
            st.pop();
            
         if(knows(M,a,b))
         {
             st.push(b);
         }
         else
          st.push(a);
        }
       
       int pc=st.top();
       
       bool rowchck=false;
       int zc=0;
       
       for(int i=0;i<n;i++)
       {
         if(M[pc][i]==0)
           zc++;
       }
       if(zc==n)  rowchck=true;
       
        bool colchck=false;
       int oc=0;
       
       for(int i=0;i<n;i++)
       {
         if(M[i][pc]==1)
           oc++;
       }
       if(oc==n-1)  colchck=true;
       
       if(rowchck==true && colchck==true)
       return pc;
       else
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
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends