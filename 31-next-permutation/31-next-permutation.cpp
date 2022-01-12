class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        int i, j;
        
        for (i = n - 2; i >=0; i--) {
            if (nums[i + 1] > nums[i]) break;
        }
        
        if (i < 0) {
            reverse(nums.begin(), nums.end());
        } else {
            for (j = n - 1; j > i; j--) {
                if (nums[i] < nums[j]){
                    swap(nums[i], nums[j]);
                    reverse(nums.begin() + i  + 1, nums.end());
                    break;
                }
            }
            
        }
    }
};