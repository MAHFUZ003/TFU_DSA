class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0, ans = 0;
        for (auto x : nums) {
            if (x == 1) {

                c++;
                ans = max(ans, c);
            } else {
                c = 0;
            }
        }
        return ans;
    }
};