class Solution {
public:
    long long smallestNumber(long long num) {
        long long mini=-1e9;
        string s=to_string(num);
        sort(s.begin(),s.end());
        int i=0;
        long long res;
          if(num<=0){ //if negetive number
            reverse(s.begin(),s.end());  // reverse the string
            res= -stoll(s); //string to long long
        }
        else{
          while(s[i]=='0')
          {
              i++;
          }
            swap(s[0],s[i]);
            res=stoll(s);
        }
        return res;
    }
};