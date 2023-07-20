class Solution {
public:
    int majorityElement(vector<int>& nums) {
//  increment a count variable every time we see the vote from the majority party and decrement it whenever a vote from some other party is occured , we can guarantee that ,
//count>0.
        int n=nums.size();
    int c=0,ele=0;
        for(int i=0;i<n;i++)
        {
            if(c==0)
            {
                ele=nums[i];
            }
            if(ele==nums[i])
                c++;
            else
                c--;
        }
        return ele;
    }
};