class Solution {
public:
    static bool comp(string &a,string &b)
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        string ans="";
        vector<string> nums_str(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            nums_str[i]=to_string(nums[i]);
        }
        sort(nums_str.begin(),nums_str.end(),comp);
        for(string s:nums_str)
        {
            ans+=s;
        }
        return ans[0]=='0'? "0" : ans;
    }
};
