class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int full = accumulate(nums.begin(), nums.end(), 0);
        
        
        int i = 0;
        int runningSum = 0;
        
        while (i < nums.size()) {
            if (runningSum == (full - nums[i] - runningSum)) {
                return i;
            }
            runningSum += nums[i];
            i++;
        }

        return -1;
        
    }
};