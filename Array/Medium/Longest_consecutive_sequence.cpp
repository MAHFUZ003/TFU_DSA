class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            set<int>st;
            for(auto x: nums)
            {
                st.insert(x);
            }
            int ans =0;
            int cnt=0;
            for(auto x:st)
            {
                if(st.find(x-1)==st.end())
                {
                    cnt=1;
                }
                else
                {
                    cnt++;
    
                }
                ans = max(ans,cnt);
            }
            return ans;
        }
    };