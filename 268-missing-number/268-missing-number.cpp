class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum =  0;
        for (int i : nums) sum += i;
         
        
        return abs(sum-n*(n + 1)/2);
    }
};