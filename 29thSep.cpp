class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dic(wordDict.begin(),wordDict.end());
        unordered_set<int> lengths;
        for(string s: wordDict)
            lengths.insert(s.length());
        vector<bool> dp(s.length()+1,false);
        dp[0] = true;
        for(int i=1;i<=s.length();i++)
        {
            for(int j:lengths)
            {
                if(i-j>=0)
                {
                    if(dic.find(s.substr(i-j,j))!=dic.end())
                    {
                        if(dp[i-j]==true)
                            dp[i]=true;
                    }
                }
            }
        }
        return dp[s.length()];
    }
};
