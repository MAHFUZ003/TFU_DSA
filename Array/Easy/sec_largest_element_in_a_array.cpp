
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int lrg=-1,seclarg=-1;
        for( auto x:arr)
        {
            if(x>lrg)
            {
                seclarg=lrg;
                lrg = x;
            }
           else if(x>seclarg && x!=lrg)
            {
                seclarg=x;
            }
        }
        return seclarg;
        
    }
};
