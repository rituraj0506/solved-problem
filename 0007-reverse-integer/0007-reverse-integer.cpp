class Solution {
public:
    int reverse(int x) {
         long long rev = 0,rem;
        while(x!=0) {
            rem= x%10;
            rev = rev*10+rem;
            x=x/10;
        }
        return (rev<INT_MIN || rev>INT_MAX) ? 0 : rev;
    }
};