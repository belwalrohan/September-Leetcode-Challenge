class Solution {
public:
    char findTheDifference(string s, string t) {
        set<char> t_set(t.begin(),t.end());
        for(auto itr=t_set.begin();itr!=t_set.end();++itr)
        {
            if(count(t.begin(),t.end(),*itr)-count(s.begin(),s.end(),*itr)>0)
                return(*itr);
        }
        return 0;
    }
};
