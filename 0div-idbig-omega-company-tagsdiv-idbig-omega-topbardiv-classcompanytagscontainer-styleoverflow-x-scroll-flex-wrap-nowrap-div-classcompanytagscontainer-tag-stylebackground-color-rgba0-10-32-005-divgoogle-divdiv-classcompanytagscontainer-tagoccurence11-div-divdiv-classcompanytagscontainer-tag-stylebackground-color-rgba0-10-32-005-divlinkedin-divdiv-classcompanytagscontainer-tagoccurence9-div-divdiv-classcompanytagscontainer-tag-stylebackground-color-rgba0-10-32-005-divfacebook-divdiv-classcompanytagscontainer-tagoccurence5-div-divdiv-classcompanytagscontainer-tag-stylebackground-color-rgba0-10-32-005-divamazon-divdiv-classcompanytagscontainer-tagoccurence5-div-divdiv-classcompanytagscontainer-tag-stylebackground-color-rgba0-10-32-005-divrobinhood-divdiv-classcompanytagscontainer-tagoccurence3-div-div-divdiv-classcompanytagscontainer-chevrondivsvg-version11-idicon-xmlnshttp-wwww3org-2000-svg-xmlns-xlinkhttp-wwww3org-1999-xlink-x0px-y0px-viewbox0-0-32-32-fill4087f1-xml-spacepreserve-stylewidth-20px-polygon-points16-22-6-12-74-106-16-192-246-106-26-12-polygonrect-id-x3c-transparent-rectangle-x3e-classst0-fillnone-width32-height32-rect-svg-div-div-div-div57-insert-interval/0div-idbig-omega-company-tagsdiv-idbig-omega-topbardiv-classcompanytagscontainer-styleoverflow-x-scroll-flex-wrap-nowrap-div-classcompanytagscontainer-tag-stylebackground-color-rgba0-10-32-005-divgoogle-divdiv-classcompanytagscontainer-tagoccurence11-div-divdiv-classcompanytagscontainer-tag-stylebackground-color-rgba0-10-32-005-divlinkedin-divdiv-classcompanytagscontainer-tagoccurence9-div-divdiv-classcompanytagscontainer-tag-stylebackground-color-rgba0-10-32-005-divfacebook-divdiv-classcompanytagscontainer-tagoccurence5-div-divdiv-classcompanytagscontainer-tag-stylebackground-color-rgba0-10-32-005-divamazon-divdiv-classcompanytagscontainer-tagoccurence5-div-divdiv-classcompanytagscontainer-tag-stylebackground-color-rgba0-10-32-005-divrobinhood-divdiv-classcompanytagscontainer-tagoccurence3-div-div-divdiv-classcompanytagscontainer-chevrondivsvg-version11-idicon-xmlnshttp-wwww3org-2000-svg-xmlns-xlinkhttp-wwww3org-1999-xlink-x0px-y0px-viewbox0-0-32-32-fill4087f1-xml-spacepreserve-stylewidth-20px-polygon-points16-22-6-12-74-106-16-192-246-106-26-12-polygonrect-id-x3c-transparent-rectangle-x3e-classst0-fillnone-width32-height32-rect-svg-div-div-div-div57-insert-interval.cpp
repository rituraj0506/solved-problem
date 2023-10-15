class Solution {
public:
   vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       vector<vector<int>>ans;
       intervals.push_back(newInterval);
       sort(intervals.begin(),intervals.end());

       for(int i=0;i<intervals.size();i++)
       {
           if(ans.empty())
           {
               ans.push_back(intervals[i]);
           }
           else{
               vector<int>&v=ans.back();
               int y=v[1];
               if(intervals[i][0]<=y)
               {
                   v[1]=max(intervals[i][1],y);
               }
               else
                   ans.push_back(intervals[i]);
           }
       }
       return ans;
}
};