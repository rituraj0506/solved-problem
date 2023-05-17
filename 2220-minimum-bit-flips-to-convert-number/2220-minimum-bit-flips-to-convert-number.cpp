class Solution {
public:
    int minBitFlips(int start, int goal) {
    // checking the binary bit if it not equal flip it else nothing
        int c=0;
        while(start>0||goal>0)
        {
            if(start%2!=goal%2)
                c++;
            start=start/2;
            goal=goal/2;
        }
        return c;
    }
};