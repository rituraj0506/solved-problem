//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        vector<int>ans;
        int c=0;
        int maxi=-1e9;
        while(n!=0)
        {
           ans.push_back(n%2);
            n=n/2;
        }
      reverse(ans.begin(),ans.end());
      for(int i=0;i<ans.size();i++)
      {
          if(ans[i]==1)
          {
              c++;
              maxi=max(maxi,c);
          }
          else{
              c=0;
          }
      }
       return maxi;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends