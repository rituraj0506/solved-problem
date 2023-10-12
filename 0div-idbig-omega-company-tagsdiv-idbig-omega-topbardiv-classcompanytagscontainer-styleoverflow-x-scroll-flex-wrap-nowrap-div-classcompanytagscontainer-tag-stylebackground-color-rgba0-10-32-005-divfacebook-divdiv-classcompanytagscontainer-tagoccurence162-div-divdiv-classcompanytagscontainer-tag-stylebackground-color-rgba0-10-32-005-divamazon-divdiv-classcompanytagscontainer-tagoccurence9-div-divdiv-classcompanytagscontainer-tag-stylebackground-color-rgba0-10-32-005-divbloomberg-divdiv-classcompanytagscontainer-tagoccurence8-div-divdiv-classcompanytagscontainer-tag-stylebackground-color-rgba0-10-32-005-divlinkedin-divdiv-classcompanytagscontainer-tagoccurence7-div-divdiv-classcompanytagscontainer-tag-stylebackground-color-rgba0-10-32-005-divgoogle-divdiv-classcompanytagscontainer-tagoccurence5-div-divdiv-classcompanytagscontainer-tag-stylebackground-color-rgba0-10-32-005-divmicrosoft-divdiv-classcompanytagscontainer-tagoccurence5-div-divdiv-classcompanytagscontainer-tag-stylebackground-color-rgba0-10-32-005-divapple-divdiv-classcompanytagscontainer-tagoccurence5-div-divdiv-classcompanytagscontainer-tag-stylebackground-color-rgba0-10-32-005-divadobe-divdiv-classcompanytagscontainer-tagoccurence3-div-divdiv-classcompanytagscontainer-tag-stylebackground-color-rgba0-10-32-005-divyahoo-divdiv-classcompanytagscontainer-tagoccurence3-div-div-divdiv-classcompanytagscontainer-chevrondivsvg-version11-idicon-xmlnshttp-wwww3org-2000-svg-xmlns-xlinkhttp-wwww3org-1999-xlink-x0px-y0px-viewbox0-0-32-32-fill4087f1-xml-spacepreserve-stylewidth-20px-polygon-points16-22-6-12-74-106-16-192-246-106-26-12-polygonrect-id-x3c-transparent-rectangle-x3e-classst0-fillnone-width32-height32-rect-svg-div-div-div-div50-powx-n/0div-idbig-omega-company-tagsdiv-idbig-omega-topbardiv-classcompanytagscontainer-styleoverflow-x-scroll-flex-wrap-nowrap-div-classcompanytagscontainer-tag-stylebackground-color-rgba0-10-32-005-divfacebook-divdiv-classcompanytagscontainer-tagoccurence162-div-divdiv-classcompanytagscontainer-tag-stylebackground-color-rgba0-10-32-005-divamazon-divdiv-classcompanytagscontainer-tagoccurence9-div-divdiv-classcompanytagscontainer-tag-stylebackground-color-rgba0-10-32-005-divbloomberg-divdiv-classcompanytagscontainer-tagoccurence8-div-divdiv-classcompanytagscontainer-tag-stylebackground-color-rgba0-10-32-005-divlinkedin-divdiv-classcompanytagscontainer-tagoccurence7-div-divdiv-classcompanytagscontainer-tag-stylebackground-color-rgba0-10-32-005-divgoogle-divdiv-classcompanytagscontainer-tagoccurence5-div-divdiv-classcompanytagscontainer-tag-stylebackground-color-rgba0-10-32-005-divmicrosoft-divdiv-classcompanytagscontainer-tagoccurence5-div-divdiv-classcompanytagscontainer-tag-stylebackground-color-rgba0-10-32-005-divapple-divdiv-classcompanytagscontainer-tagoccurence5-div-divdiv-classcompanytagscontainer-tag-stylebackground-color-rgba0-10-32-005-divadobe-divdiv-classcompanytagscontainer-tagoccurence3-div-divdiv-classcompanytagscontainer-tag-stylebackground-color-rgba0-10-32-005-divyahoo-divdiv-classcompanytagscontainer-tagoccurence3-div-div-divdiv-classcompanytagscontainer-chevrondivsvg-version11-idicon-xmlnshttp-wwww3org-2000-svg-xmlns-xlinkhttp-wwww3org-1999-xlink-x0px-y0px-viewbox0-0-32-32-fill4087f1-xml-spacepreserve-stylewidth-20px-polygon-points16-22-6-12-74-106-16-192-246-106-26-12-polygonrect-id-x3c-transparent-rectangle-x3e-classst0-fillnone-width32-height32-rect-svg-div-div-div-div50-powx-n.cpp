class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        int n1=abs(n);
        while(n1>=1)
        {
         if(n1%2==1)
          ans*=x;
         
         x=x*x;
         n1=n1/2;
        }
        return n<0?1/ans:ans;
    }
};