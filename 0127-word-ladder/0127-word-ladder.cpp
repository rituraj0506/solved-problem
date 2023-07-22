class Solution {
public:
    int ladderLength(string begw, string endWord, vector<string>& wordl) {
     queue<pair<string,int>>q;
        q.push({begw,1});
        set<string>st(wordl.begin(),wordl.end());
        st.erase(begw);
        while(!q.empty())
        {
            string word=q.front().first;
            int len=q.front().second;
            q.pop();
            if(word==endWord) return len;
            for(int i=0;i<word.size();i++)
            {
                char org=word[i];
                for(char ch='a';ch<='z';ch++)
                {
                    word[i]=ch;
                    if(st.find(word)!=st.end())
                    {
                        st.erase(word);
                        q.push({word,len+1});
                    }
                }
                word[i]=org;
            }
        }
        return 0;
    }
};