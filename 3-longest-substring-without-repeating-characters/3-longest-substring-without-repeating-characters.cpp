class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> mp;
        
        int n = s.length(), start = 0, maxi = INT_MIN;

        for (int end = 0; end < n; end++) {
            mp[s[end]]++;
            
            while(mp.size() != end+1 - start){
                mp[s[start]]--;
                
                if (mp[s[start]] == 0) mp.erase(s[start]);
                start++;
            }
            
            maxi = max(maxi, end+1 - start);
        }
        
        return maxi == INT_MIN?0:maxi;
    }
};