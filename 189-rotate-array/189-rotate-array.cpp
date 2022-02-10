class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // 4, 3, 2, 1
        // 7, 6, 5
        // 4, 3, 2, 1, 7, 6, 5
        // 5, 6, 7, 1, 2, 3, 4,
        int n = nums.size();
       
        
        k = k% nums.size();
        
        reverse(nums, 0, n - k - 1);
        reverse(nums, n - k, n - 1);
        reverse(nums, 0, n - 1);
        
        
    }
    
    void reverse(vector<int>& nums, int lo, int hi) {
        
        while (lo < hi){
            swap(nums[lo], nums[hi]);
            lo++;
            hi--;
        }
        
    }
};