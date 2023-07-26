class Solution {
public:
    bool isvalid(vector<int>& dist,int mid,double hour)
    {
        double ans=0,a=0;
        for(int i=0;i<dist.size();i++)
        {
            a=(dist[i]*1.0)/mid;
            if(i!=dist.size()-1)
                ans+=ceil(a);
            else
                ans+=a;
            if(ans>hour)
                return false;
        }
        return true;
       
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
       int n=dist.size();
        int res=-1;
        int l=1,r=1e9;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isvalid(dist,mid,hour))
            {
                res=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        return res;
       
    }
};