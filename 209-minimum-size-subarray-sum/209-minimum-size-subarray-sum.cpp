class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     
        int len = INT_MAX;
        
        int left = 0;
        
        int s = 0;
        
        for (int i = 0; i < nums.size(); i++) {
             s+=nums[i];
            
            while (s >= target) {
                len = min(i+1  - left, len);
                
                s -= nums[left];
                left++;
            }
        }
        
        return (len != INT_MAX ? len: 0);
        
    }
    
};