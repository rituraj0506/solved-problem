class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
     vector<long long>ans;
        long long i=2;
        long long sum=0;
        if(finalSum%2!=0)
            return ans;
        while((i+sum)<=finalSum)
        {
            cout<<i<<endl;
            ans.push_back(i);
            sum+=i;
            i+=2;
            
        }
        long long n=ans.size();
        ans[n-1]+=(finalSum-(sum));
            return ans;
    }
};