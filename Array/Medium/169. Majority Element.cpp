class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr=-1,times=0;
        for(auto x: nums)
        {
            if(times==0)
            {
                curr=x;
                times = 1;
            }
            else  if(curr==x)
            {
                times++;
            }
            else times--;

        }
    return curr;
    }
};