class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int total=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
        if(prices[i]>prices[i-1])
            total+=(prices[i]-prices[i-1]);
        }
        return total;
    }
};