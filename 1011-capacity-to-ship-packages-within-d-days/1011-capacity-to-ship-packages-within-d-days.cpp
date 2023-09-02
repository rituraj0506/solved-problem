class Solution {
public:
    bool isvalid(vector<int>&a,int mid,int k)
    {
        int n=a.size();
        int sum=0;
        int cap=1;
        for(int i=0;i<n;i++)
        {
         sum+=a[i];
         if(sum>mid)
         {
             cap++;
             sum=a[i];
         }
          if(cap>k)
         return false;
        }
        return true;
    }
  
    int shipWithinDays(vector<int>& weights, int days) {
        int st=*max_element(weights.begin(),weights.end());
        int last=0;
        int res=-1;
        int n=weights.size();
        for(int i=0;i<n;i++)
        {
            last+=weights[i];
        }
        int end=last;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(isvalid(weights,mid,days))
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