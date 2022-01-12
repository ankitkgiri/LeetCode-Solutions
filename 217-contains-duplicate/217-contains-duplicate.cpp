class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int, int> ump;
        
        for (auto a: nums){
            
            ump[a]++;
        }
        return nums.size() > ump.size();
    }
};