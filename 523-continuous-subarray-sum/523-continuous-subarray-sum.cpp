class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int s = 0;
        
        unordered_map<int, int> mp;
        mp[0] = -1;
        
        for (int i = 0; i < n; i++) {
            s += nums[i];
            
            s = s%k;
            cout << s <<" ";
            if (mp.find(s) != mp.end()) {
                int idx = mp[s];
                if (i - idx > 1) return true;
            } 
            
            mp.insert({s, i});
        }
//         for (int i = 0; i < n; i++) {
//             int s = 0;
//             for (int j = i; j < n; j++) {
//                 s += nums[i];
//             }
            
//             if (s % k == 0)  return true;
//         }
        
        return false;
    }
};