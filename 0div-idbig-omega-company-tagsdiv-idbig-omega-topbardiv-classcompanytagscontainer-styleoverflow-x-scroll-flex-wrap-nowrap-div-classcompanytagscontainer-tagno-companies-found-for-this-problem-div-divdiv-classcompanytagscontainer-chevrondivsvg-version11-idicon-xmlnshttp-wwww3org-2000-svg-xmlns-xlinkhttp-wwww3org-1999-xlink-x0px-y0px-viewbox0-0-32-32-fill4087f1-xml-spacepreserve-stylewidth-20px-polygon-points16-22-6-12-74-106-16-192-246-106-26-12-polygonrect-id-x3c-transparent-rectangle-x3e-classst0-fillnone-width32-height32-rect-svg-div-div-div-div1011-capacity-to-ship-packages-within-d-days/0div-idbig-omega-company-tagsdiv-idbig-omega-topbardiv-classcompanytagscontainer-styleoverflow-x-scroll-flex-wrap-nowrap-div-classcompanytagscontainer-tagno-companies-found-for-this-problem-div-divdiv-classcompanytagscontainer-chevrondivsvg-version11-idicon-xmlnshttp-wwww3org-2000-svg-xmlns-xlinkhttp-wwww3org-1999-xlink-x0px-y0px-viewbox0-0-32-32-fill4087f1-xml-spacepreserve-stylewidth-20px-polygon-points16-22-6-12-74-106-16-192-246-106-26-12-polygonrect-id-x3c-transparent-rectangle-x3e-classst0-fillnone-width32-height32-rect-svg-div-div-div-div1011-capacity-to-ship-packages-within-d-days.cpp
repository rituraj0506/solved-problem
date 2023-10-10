class Solution {
public:
    bool isvalid(vector<int>&weights,int days,int mid)
    {
     int cap=1;
      int n=weights.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
          sum+=weights[i];
            if(sum>mid){
              cap++;
            sum=weights[i];
            }
            if(cap>days)
                return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int l=*max_element(weights.begin(),weights.end());// atleast one book dena hai to maximum page wala denge
        int end=0;
        int res=-1;
        for(int i=0;i<n;i++)
        {
            end+=weights[i];
        }
       int h=end;// dusre ko sum up karke de do
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(isvalid(weights,days,mid))
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