class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        // set<vector<int>> ans;
        vector<vector<int>> ans;
        
        generate(candidates, 0, target, vector<int>(), ans);
        
        vector<vector<int>> ret;
 
        
        //for (auto a : ans) ret.push_back(a);
        return ans;
        
    }
    
    void generate(vector<int>& candidates, int i, int target, vector<int> com, vector<vector<int>>& ans){
        
        if (target == 0){
            // ans.insert(com);
            // for ()
            ans.push_back(com);
            return;
        }
        
        if (i == candidates.size() || target < 0){
            return;
        }
        
        generate(candidates, i + 1, target, com, ans);
        com.push_back(candidates[i]);
        if (target-candidates[i] > 0);
            generate(candidates, i, target-candidates[i], com, ans);
    }
};