//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    // help chatgpt to proper understand
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
    vector<int>ans;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
    for(int i=0;i<k;i++)
    {
     minh.push({arr[i][0],i});   
    }
    
    while(!minh.empty())
    {
        auto it=minh.top();
        minh.pop();
        int ele=it.first;
        int row=it.second;
        ans.push_back(ele);
        if(arr[row].size()>1)
        {
            minh.push({arr[row][1],row});
      // Increment the index of the current row to move to the next element in the row.
           arr[row].erase(arr[row].begin());
        }
    }

    return ans;
}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends