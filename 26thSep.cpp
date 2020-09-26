class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int summ=0,prev;
        for(int i=0;i<timeSeries.size();i++)
        {
            if(i==0)
            {
                summ+=duration;
            }
            else
            {
                if(prev>=timeSeries[i])
                    summ+=timeSeries[i]+duration-prev;
                else
                    summ+=duration;
            }
            prev=timeSeries[i]+duration;
        }
        return summ;
    }
};
