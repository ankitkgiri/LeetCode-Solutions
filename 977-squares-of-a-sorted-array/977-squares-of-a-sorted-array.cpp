class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans;
        
        
        int pivot = 0;
        
        for (auto a: nums) if (a < 0) pivot++; else break;
        
        int lo = pivot - 1;
        int hi = pivot;
        
        while (lo >= 0 && hi < nums.size()){
            if (abs(nums[lo]) < nums[hi]){
                ans.push_back(nums[lo]*nums[lo]);
                lo--;
            } else {
                ans.push_back(nums[hi]*nums[hi]);
                hi++;
            }
        }
        
        while (lo >= 0){
            ans.push_back(nums[lo]*nums[lo]);
            lo--;
        }
        
        while (hi < nums.size()){
            ans.push_back(nums[hi]*nums[hi]);
            hi++;
            
        }
        
        return ans;
    }
};