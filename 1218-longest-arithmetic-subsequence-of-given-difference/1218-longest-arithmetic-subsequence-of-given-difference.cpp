class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        int n=arr.size();
       unordered_map<int,int>m;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int tmp=arr[i]-d;
            int ans=0;
            if(m.count(tmp))
                ans=m[tmp];// agar hai to store kr lo 
        
            m[arr[i]]=1+ans; // ab uska leng 
            
            maxi=max(maxi,m[arr[i]]);
        }
        return maxi;
    }
};