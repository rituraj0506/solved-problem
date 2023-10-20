class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans,res;
        unordered_map<int,int>m;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m.find(nums2[i])!=m.end())
            {
                //if(m[nums2[i]]!=0)
                ans.push_back(nums2[i]);
            }
          //m[nums2[i]]=0;// uske freq nko zero kar diye 
        }
        set<int>st;
        for(auto i:ans)
        {
            st.insert(i);
        }
        for(auto it:st)
            res.push_back(it);
        return res;
        
    }
    
};