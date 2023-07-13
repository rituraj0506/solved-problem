class Solution {
public:
    int candy(vector<int>& rating) {
        int n=rating.size();
        int maxi=-1e9;
        int sum=0;
       vector<int>left(n,1);
       vector<int>right(n,1);
        for(int i=1;i<n;i++)
        {
           if(rating[i]>rating[i-1]) 
               left[i]=left[i-1]+1;
        }
    
       for(int i=n-2;i>=0;i--)
        {
            if(rating[i]>rating[i+1])
                right[i]=right[i+1]+1;
        }
        
        for(int i=0;i<right.size();i++)
        {
            maxi=max(left[i],right[i]);
            sum+=maxi;
        }
    
        return sum;
        
    }
};