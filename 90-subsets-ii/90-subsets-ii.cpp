class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>> subsets;
        
        generate(nums, 0, vector<int>(), subsets);
        
        vector<vector<int>> ans;
        for (auto a: subsets){
            ans.push_back(a);
        }
        return ans;  
    }
    
    void generate(vector<int>& nums, int i,vector<int> subset, set<vector<int>>& subsets){
        
        if (i == nums.size()) {
            sort(subset.begin(), subset.end());
            subsets.insert(subset);
            return;
        }
        generate(nums, i + 1, subset, subsets);
        subset.push_back(nums[i]);
        generate(nums, i + 1, subset, subsets);
        
        
    }
};