class Solution {
public:
    int f(int ind,vector<int>& days, vector<int>& costs,vector<int>&dp)
    {
        int n=days.size();
        if(ind>=n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pass1=costs[0]+f(ind+1,days,costs,dp);
        int i,pass7,pass30;
        //ind jiss day per abhi hm hai i jiss pr hm pachuche ge uss 7 din tak 
        for(i=ind;i<n && days[i]<days[ind]+7;i++);
         pass7=costs[1]+f(i,days,costs,dp);
            
        for(i=ind;i<n&&days[i]<days[ind]+30;i++);
          pass30=costs[2]+f(i,days,costs,dp);
            
            
            return dp[ind]=min({pass1,pass7,pass30});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int>dp(n,-1);
        return f(0,days,costs,dp);
    }
};