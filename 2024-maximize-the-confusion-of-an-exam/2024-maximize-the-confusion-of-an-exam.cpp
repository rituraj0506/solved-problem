class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
       int i=0,j=0,c=0;
        int n=ans.size();
        int maxi=-1e9;
        while(j<n)
        {
           if(ans[j]=='T')
               c++;
             if(c<=k){
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(c>k)
            {
             while(c>k)
             {
              if(ans[i]=='T')
                  c--;
                 i++;
             }
                j++;
            }
        }
        i=0,j=0,c=0;
        int maxi1=-1e9;
        while(j<n)
        {
           if(ans[j]=='F')
               c++;
             if(c<=k){
                maxi1=max(maxi1,j-i+1);
                j++;
            }
            else if(c>k)
            {
             while(c>k)
             {
              if(ans[i]=='F')
                  c--;
                 i++;
             }
                j++;
            }
        }
        return max(maxi,maxi1);
    }
};