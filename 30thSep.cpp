class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_set<int> set(nums.begin(),nums.end());
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxx=max(maxx,nums[i]);
        }
        if(maxx<1)
            return 1;
        for(int i=1;i<maxx;i++)
        {
            if(set.find(i)==set.end())
                return i;
        }
        return maxx+1;
    }
};
