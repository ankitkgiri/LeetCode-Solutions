class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char, int> mp;
        vector<int> p;
        vector<int> q;
        
        
        int j = 0;
        
        for (auto c: s) {
            if (mp[c] == 0) {
                mp[c] = j + 1;
                j++;
                p.push_back(j + 1);
            } else {
                p.push_back(mp[c]);
            }
        }
        
        j = 0;
        mp = unordered_map<char, int>();
        
        for (auto c: t) {
            if (mp[c] == 0) {
                mp[c] = j + 1;
                j++;
                q.push_back(j + 1);
            } else {
                q.push_back(mp[c]);
            }
        }
        
        if (p == q) return true;
        
        return false;
    }
};