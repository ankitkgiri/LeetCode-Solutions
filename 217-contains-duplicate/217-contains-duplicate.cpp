class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int, int> ump;
        
        for (int a: nums){
            if (ump[a] > 0) {
                return true;
            }
            ump[a]++;
        }
        return false;
    }
};