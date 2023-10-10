class Solution {
public:
    long long canvalid(vector<int>&piles, int h,int mid)
    {
        int n=piles.size();
        long long  ans=0;
        for(int i=0;i<n;i++)
        {
         ans+=(piles[i]%mid==0)?(piles[i]/mid):(piles[i]/mid)+1;
            
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long  st=1;
        long long end=*max_element(piles.begin(),piles.end());
        long long res=-1;
        while(st<=end)
        {
            long long mid=st+(end-st)/2;
            long long ans=canvalid(piles,h,mid);
            if(ans<=h)
            {
                res=mid;
                end=mid-1;
            }
            else
            st=mid+1;
        }
        return res;
    }
};