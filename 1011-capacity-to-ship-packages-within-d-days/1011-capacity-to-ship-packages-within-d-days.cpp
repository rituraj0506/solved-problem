class Solution {
public:
    bool isvalid(vector<int>&a,int day,int mid)
   {
       int sum=0;
        int n=a.size();
        int d=1;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>mid)
            {
                d++;
                sum=a[i];
            }
             if(d>day)
                 return false;
        }
        return true;
   }
    int shipWithinDays(vector<int>& weights, int days) {
        int st=*max_element(weights.begin(),weights.end());
        int last=0;
        int res=0;
        int n=weights.size();
        for(int i=0;i<n;i++)
        {
           last=last+=weights[i];
        }
        int end=last;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(isvalid(weights,days,mid))
            {
                res=mid;
                end=mid-1;
            }
            else
                st=mid+1;
        }
        return  res;
    }
};