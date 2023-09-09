class Solution {
public:
    int minSetSize(vector<int>& arr) {
       int n=arr.size();
        unordered_map<int,int>m;
        int c=0;
        for(auto i:arr)
        {
            m[i]++;
        }
        priority_queue<int>maxh;
        for(auto it:m)
        {
            maxh.push(it.second);
        }
        int ans=0;
        while(maxh.size()>0)
        {
            ans+=maxh.top();
            maxh.pop();
            c++;
            if(ans>=n/2)
                break;
        }
        return c;
    }
};