class Solution {
public:
    // not understand ques properly
        bool isPossible(vector<int>& q,int n,int barrier){
        int cnt=0;
        for(int i=0;i<q.size();i++){
            if(q[i]<=barrier){
                cnt++;
            }
            else{
                int temp=q[i];
                while(temp>0){
                    temp-=barrier;
                    cnt++;
                }
            }
            if(cnt>n) return false;
        }
        return true;
    }

    int minimizedMaximum(int n, vector<int>& q) {
        int start=1;
        int end=1e9;
         int ans = INT_MAX;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(isPossible(q,n,mid)){
                ans = mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};