class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int top=0,bottom=n-1;
        int left=0,right=n-1;
        int dir=1;
        int c=1;
        vector<vector<int>>ans(n,vector<int>(n));
        while(left<=right&&top<=bottom){
            
            if(dir==1){
        for(int i=left;i<=right;i++)
            ans[top][i]=c++;
             dir=2;
            top++;
            }
            
         else if(dir==2){
        for(int i=top;i<=bottom;i++)
            ans[i][right]=c++;
             dir=3;
            right--;
            }
            
               if(dir==3){
        for(int i=right;i>=left;i--)
           ans[bottom][i]=c++;
             dir=4;
            bottom--;
            }
            
             if(dir==4){
        for(int i=bottom;i>=top;i--)
            ans[i][left]=c++;
             dir=1;
            left++;
            }
        }
        return ans;
    }
};