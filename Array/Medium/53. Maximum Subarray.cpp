class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = -1e6, maxi = -1e6;
        for (auto x : nums) {
        curr = max(x,curr+x);
        maxi = max(maxi,curr);
        }
        return maxi;
    }
};