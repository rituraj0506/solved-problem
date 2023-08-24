class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
       vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int diff=INT_MAX;
        
        for(int i=0;i<n-1;i++)
        {
            diff=min(diff,abs(arr[i]-arr[i+1]));
        }
        
        for(int i=0;i<n-1;i++)
        {
            vector<int>v;
         if(abs(arr[i]-arr[i+1])==diff){
             v.push_back(arr[i]);
             v.push_back(arr[i+1]);
              ans.push_back(v);
         }
         
        }
        return ans;
    }
};