class Solution {
public:
    int minSteps(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        int cnt  = 0;
        
        unordered_map<char, int> mps;
        unordered_map<char, int> mpt;
        
        for (char c : s){
            mps[c]++;
        }
        
        for (char c : t) {
            mpt[c]++;
        }
        
        for (char c : s) {
            if (mps.find(c) != mps.end() && mpt.find(c) != mpt.end()){
                mps[c]--;
                mpt[c]--;
                
                if (mps[c] == 0) mps.erase(c);
                if (mpt[c] == 0) mpt.erase(c);
            }
        }
    
        for (auto a : mpt){
            cout << a.second << " ";
            cnt += a.second;
        }
                
        
        return cnt;

    }
};