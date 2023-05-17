class Solution {
public:
    int halveArray(vector<int>& nums) {
       priority_queue<double>maxh;
        int n=nums.size();
        double sum=0,sum1=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxh.push(nums[i]);
        }
        int c=0;
        sum1=sum/2;
        while(sum1<sum){
            double a=maxh.top();
            maxh.pop();
            double b=a/2;
            maxh.push(b);
            c++;
            sum1+=b;
        }
        return c;
    }
};