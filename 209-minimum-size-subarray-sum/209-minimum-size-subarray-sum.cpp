class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     
        int n = nums.size();
        
        int start = 0;
        int s = 0;
        int mini = INT_MAX;
        int len = 0;
       
        for (int end = 0; end < n; end++) {
            s+= nums[end];
            
            while (s >= target) {
                mini = min(mini, end+1 - start);
                
                s -= nums[start];
                start++;
            }
        }
     
        
        return (mini != INT_MAX) ? mini : 0;
    }
    
};