class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t = accumulate(nums.begin(), nums.end(), 0);
        
        int e_t = nums.size()*(nums.size() + 1)/2;
        
        return abs(t-e_t);
    }
};