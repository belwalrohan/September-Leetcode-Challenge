class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==s.size()-1)
            {
                if(s[i]!=' ')
                    len++;   
                break;
            }
            if(s[i]==' ')
            {
                flag=0;
            }
            else
            {
                if(flag==0)
                    len=1;
                else
                    len++;
                flag=1;
            }
        }
        return(len);
    }
};
