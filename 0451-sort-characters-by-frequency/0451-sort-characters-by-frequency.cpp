class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        int n=s.size();
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        // Note the order of elements in the pair
        priority_queue<pair<int,char>>maxh;
        for(auto it:m)
        {
       maxh.push({it.second,it.first});
         // Push elements into the priority queue based on frequency
        }
        while(maxh.size()>0)
        {
            char ch=maxh.top().second;
            int b=maxh.top().first;
            for(int i=0;i<b;i++)
            ans+=ch;
            maxh.pop();
        }
        return ans;
    }
};