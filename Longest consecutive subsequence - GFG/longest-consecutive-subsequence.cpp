//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      set<int>st;
      for(int i=0;i<n;i++)
      {
          st.insert(arr[i]);
      }
      int maxi=0;
      for(auto it:st)
      {
          if(st.find(it-1)==st.end())
          {
              auto x=it;
              int c=1;
              while(st.find(x+1)!=st.end())
              {
                 x++;
                 c++;
              }
              maxi=max(maxi,c);
          }
      }
      return maxi;
     
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends