class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int k) {
       //unordered_map<int,int>m;
         map<int,int>m;// use map it gives sorted order
        int n=hand.size();
        for(int i=0;i<n;i++)
        {
           m[hand[i]]++; 
        }
       
        while(m.size()>0)
        {
            auto it=m.begin();
            int ele=it->first;// here the smallest no
            cout<<ele<<endl;
            for(int i=0;i<k;i++)
            {
                if(m.find(ele+i)==m.end())
                    return false;
                m[ele+i]--;
                if(m[ele+i]==0)
                 m.erase(ele+i);
            }
        }
         return true;
    }
};