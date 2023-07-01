class Solution {
public:
    int get(string &s){
     return stoi(s.substr(0,2))*60+stoi(s.substr(3));      
    }
   
    int convertTime(string current, string correct) {
        int diff=get(correct)-get(current);
        int ops[4]={60,15,5,1};
        int ans=0;
        for(int op:ops)
        {
            ans+=diff/op;
            diff%=op;
        }
        return ans;
       
    
    }
};