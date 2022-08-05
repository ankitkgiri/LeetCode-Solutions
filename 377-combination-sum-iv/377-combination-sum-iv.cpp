class Solution {
public:
    
    
    int dfs(vector<int>& nums, int sum, int target, vector<int>& dp) {
        
        if (target == sum) {
            return 1;
        }
        if (sum > target) return 0;
        if (dp[sum] != -1) return dp[sum];

        
        int ways = 0;
        for (int i = 0; i < nums.size(); i++){
            if (sum + nums[i] <= target)
                
                ways += dfs(nums, sum + nums[i], target, dp);
                   
        }
           
        return dp[sum] = ways;
        
    } 
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(1001, -1);
        
        int a = dfs(nums, 0, target, dp);
        
        
        return a;
    }
};