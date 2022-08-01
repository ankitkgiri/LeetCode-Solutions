class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> runSum;
        
        int running = 0;
        
        for (auto a: nums){
            running += a;
            runSum.push_back(running);
        }
        
        return runSum;
        
    }
};