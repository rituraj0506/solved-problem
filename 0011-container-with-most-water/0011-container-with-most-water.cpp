class Solution {
public:
    int maxArea(vector<int>& h) {
     int n=h.size();
     int l=0,r=n-1,maxi=0;
     int area=0,area1=0;
        // run l<r becoz if l==r area will 0
     while(l<r)
     {
        area=min(h[l],h[r])*(r-l);
        if(maxi<area)
            maxi=area;
         if(min(h[l],h[r])==h[l])
             l++;
         else
             r--;
     }
        return maxi;
    }
};