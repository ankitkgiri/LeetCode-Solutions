class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set;
        
        if (n == 0) {
            return 0;
        }
        
        for (int i : nums) set.insert(i);
        int len = 1;
        
        for (int i = 0; i < n; i++) {
            if (set.find(nums[i] - 1) == set.end()){
                 int temp = 1;
            
                while (set.find(nums[i] + 1) != set.end()){
                    temp++;
                    nums[i]++;
                    len = max(temp, len);
                }
            }
           
        }
        
        return len;
    }
};