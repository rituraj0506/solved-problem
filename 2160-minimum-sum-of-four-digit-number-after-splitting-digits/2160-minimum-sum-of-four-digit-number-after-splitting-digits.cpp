class Solution {
public:
    int minimumSum(int num) {
//  Get the 4 digits from n. Assume they are a <= b <= c <= d, the sum is minimum when new1 = ac and new2 = bd.

//So, the answer is 10 * (a + b) + (c + d). 
        string s=to_string(num);
        int n=s.size();
        sort(s.begin(),s.end());
        int ans;
        ans=10*(s[0]-'0'+s[1]-'0')+(s[2]-'0'+s[3]-'0');
        return ans;
    }
};