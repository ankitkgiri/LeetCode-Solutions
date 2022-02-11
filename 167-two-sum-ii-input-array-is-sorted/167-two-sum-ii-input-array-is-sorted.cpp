class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        
        int lo = 0;
        int hi = numbers.size() - 1;
        
        
        while (lo <= hi) {
            int temp_sum = numbers[lo] + numbers[hi];
            
            if (temp_sum == target){
                break;
            }
            else if (temp_sum < target) {
                lo++;
            } else {
                hi--;
            }
        }
        
        return {lo + 1, hi + 1};
    }
};