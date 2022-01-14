class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = INT_MIN;
        int sum  = 0;
        
        for (int i : nums) {
            sum += i;
            maxi = max(sum, maxi);
            if (sum < 0) sum = 0;
        }
        
        return maxi;
    }
};