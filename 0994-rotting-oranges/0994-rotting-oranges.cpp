
class Solution 
{
    public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>> ans=grid;
        int n=ans.size();
        int m=ans[0].size();
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==2)
                    q.push({{i,j},0});
            }
        }
        int cnt,mxcnt=0;
        int row,col,nrow,ncol;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        while(!q.empty()){
            row=q.front().first.first;
            col=q.front().first.second;
            cnt=q.front().second;
            mxcnt=max(mxcnt,cnt);
            q.pop();
            for(int i=0;i<4;i++){
                nrow=row+delRow[i];
                ncol=col+delCol[i];
                if((nrow>=0 && nrow<n) && (ncol>=0 && ncol<m) && ans[nrow][ncol]==1){
                ans[nrow][ncol]=2;
                q.push({{nrow,ncol},cnt+1});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==1)
                   return -1;
            }
        }
        return mxcnt;
    }
};