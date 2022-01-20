class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max  = INT_MIN;
        int temp_max = 0;
        for (int i : nums){
            if (i == 1){
                temp_max++;
            } else {
                temp_max = 0;
            }
            
            if (temp_max > max){
                max = temp_max;
            }
        }
        
        
        return max;
    }
};