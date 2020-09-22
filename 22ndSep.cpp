class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> dicti;
        int n=nums.size();
        vector<int> ans;
        for(int i:nums)
        {
            if(dicti.find(i)!=dicti.end())
                dicti[i]++;
            else
                dicti[i]=1;
        }
        for(auto x:dicti)
        {
            if(x.second>n/3)
                ans.push_back(x.first);
        }
        return ans;
    }
};
