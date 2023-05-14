class Solution {
public:
    long long cantime(vector<int>& time,long long mid)
    {
        long long trip=0;
        for(auto x:time)
        {
            trip+=(mid/x);
        }
        return trip;
            
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=1;
        long long h=1e14;
        long long res=-1;
        while(l<=h)
        {
            long long mid=l+(h-l)/2;
            long long total=cantime(time,mid);
            if(total>=totalTrips)
            {
                res=mid;
                h=mid-1;
            }
            else
                l=mid+1;
        }
            
        return res;
    }
};