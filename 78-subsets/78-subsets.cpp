class Solution {
public:
    vector<vector<int>> subs;
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> set;
        
        generate(nums, 0, set);
        return subs;
    }
    
    
    void generate(vector<int>& nums, int i, vector<int> set){
        if (i >= nums.size()){
            subs.push_back(set);
            return;
        }
        generate(nums, i + 1, set);
        set.push_back(nums[i]);
        generate(nums, i + 1, set);
        
    }
};