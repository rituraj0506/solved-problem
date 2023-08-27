class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
     int n=list1.size();
     int n1=list2.size();
      map<string,int>m;
        int ans=1e9;
     for(int i=0;i<n;i++)
     {
          m[list1[i]]=i;
     }
       vector<string>res;
       for(int i=0;i<n1;i++)
       {
           if(m.count(list2[i]))
           {
               if(i+m[list2[i]]<ans)
               {
                   ans=i+m[list2[i]];
                   res.clear();
                   res.push_back(list2[i]);
               }
                 else if(i+m[list2[i]]==ans)
               {

                   res.push_back(list2[i]);
               }
           }
       }
        return res;
      
    }
};