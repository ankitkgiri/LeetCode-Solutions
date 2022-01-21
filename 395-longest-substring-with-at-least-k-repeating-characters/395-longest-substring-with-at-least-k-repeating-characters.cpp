class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.length();
        
        return util(s, 0, n, k);
    }
    
    int util(string s, int start, int end,int k){
        if (end < k) return 0;
        
        unordered_map<char, int> mp;
        
        for (int i = start; i < end; i++) {
            mp[s[i]]++;
        }
        
        for (int mid = start; mid < end; mid++) {
            if (mp[s[mid]] >= k) continue;
            
            int midNext = mid + 1;
            
            while (midNext < end && mp[s[midNext]] < k) midNext++;
            
            return max(util(s, start, mid, k), util(s, midNext, end, k));
        }
        
        return (end - start);
    }
};