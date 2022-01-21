class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        
        int maxi = INT_MIN;
        unordered_map<char, int> mp;
        for (int end  = 0; end < s.length(); end++){
            
            mp[s[end]]++;
            
            while (mp.size() != (end - start + 1)){
                mp[s[start]]--;
                
                if (mp[s[start]] == 0){
                    mp.erase(s[start]);
                }
                start++;
            }
            
            maxi = max(maxi, end - start + 1);
            
        }
        
        return max(maxi, 0);
    }
};