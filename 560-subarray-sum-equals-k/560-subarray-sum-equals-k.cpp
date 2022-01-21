class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int cnt = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        
        int s  = 0;
        
        mp[0]++;
        
        for (int i = 0; i < n; i++) {
            
            s += nums[i];
            
            if (mp[s - k] > 0) cnt += mp[s - k];
            
            mp[s]++;
            
        }
        
//         for (int i = 0; i < n; i++) {
//             int sum = 0;
//             for (int j = i; j < n; j++){
//                 sum += nums[j];
//                  mp[sum]++;
                
//                 if (sum == k) cnt++;
//             }
//         }
        
//         vector<int> sum_nums;
//         int s = 0;
//         for (int i: nums){
//             s += i;
//             sum_nums.push_back(s);
//         }
        
//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++){
//                 if (sum_nums[j] - sum_nums[i] == k) cnt++;
//             }
//         }
//         if (sum_nums[0] == k){
//             cnt++;
//         }
        
        
        return cnt;
    }
};