class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_till_now=prices[0];
        int ans=0;
        for(auto x:prices)
        {
            ans =max(ans,x-min_till_now);
            min_till_now = min(x,min_till_now);
        }
        return ans;
        
    }
};