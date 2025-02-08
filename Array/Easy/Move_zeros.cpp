class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0,n = nums.size();
        for(int i =0;i<n;i++)
        {
            //j is where  first 0 is placed
            if(nums[i]!=0)
            {
                swap(nums[j],nums[i]);
                j++;

            }
            
        }
       
    }
};