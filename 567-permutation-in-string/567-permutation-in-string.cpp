class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        unordered_map<char, int> check, mp;
        
        for (auto ch: s1) check[ch]++; 
        
        int k = s1.length();
        int start = 0;
        for (int end = 0; end < s2.length(); end++) {
            
            mp[s2[end]]++;
            
            if (end+1 - start > k) {
                
                mp[s2[start]]--;
                if (mp[s2[start]] == 0) mp.erase(s2[start]);
                
                start++;
            }
            
            if (end+1 - start == k) if (mp == check) return true;
            
            
        }
        
        return false;
    }
    
};