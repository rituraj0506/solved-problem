
class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
     int emptyr=n-index-1;
     int emptyl=index;
        
        int h=maxSum,l=1;
        long long res=0;
        
        while(l<=h)
        {
            int mid=l+(h-l)/2;
           long long lsum=0,rsum=0,ele=mid-1;
            
            if(emptyr<=ele)
            {
                rsum=(ele*(ele+1))/2-((ele-emptyr)*(ele-emptyr+1))/2;
            }
            else
                rsum=(ele*(ele+1))/2+(emptyr-ele);
            
            if(emptyl<=ele)
            {
                lsum=(ele*(ele+1))/2-((ele-emptyl)*(ele-emptyl+1))/2;
            }
            else
                lsum=(ele*(ele+1))/2+(emptyl-ele);
            
            
            long long sum=lsum+mid+rsum;
            
            if(sum<=maxSum)
            {
                l=mid+1;
                res=mid;
            }
            else
            {
                h=mid-1;
            }
        }
       return res; 
            
    }
};