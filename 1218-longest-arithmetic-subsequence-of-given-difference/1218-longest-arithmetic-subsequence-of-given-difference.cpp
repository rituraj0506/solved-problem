class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>m;
        int ans=0;
        
        for(int i=0;i<arr.size();i++)
        {
            int temp=arr[i]-difference;
            int tempans=0;
            
            if(m.count(temp))
                tempans=m[temp];
            
            m[arr[i]]=1+tempans;
            
            ans=max(ans,m[arr[i]]);
        }
        return ans;
    }
};