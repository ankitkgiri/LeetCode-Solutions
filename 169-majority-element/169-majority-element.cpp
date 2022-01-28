class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int count = 1;
        int mIndex = 0;
        
        for (int i = 1; i < n; i++) {
            
            (nums[i] ==  nums[mIndex]) ? count++ : count--;
            
            if (count == 0) {
                mIndex = i;
                count = 1;
            }
        }
       
        return nums[mIndex];
    }
};