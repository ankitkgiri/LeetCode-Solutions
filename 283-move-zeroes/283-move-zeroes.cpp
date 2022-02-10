class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int idx = 0;
        
        for (auto a: nums) if (a != 0) nums[idx++] = a;
        
        while (idx < nums.size()) nums[idx++] = 0;        
        
    }
};