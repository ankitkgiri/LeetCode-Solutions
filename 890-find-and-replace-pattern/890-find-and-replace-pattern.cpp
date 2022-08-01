class Solution {
public:
    vector<int> getPatCount(string pattern) {
        vector<int> pat_count(pattern.size());
        pat_count[0] = 1;
        
        unordered_map<char, int> check;
        check[pattern[0]] = 1;
        
        for (int i = 1; i < pattern.size();i++){
            
            if (pattern[i] == pattern[i - 1]){
                pat_count[i] = pat_count[i - 1];
                
            } else {
                if (check.find(pattern[i]) == check.end()){
                    pat_count[i] = pat_count[i - 1] + 1;
                    check[pattern[i]] = pat_count[i];
                } else {
                    pat_count[i] = check[pattern[i]];
                }
            }
        }
        
        return pat_count;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        int k = pattern.size();
        
        vector<int> test = getPatCount(pattern);
        //for (auto a: test) cout << a << " ";
        //cout << "\n";
        
        vector <string> answer;
        for (int i = 0; i < words.size(); i++) {
            vector<int> word_pat = getPatCount(words[i]);
           // for (auto a: word_pat) cout << a << " ";
            
            if (word_pat == test) {
                answer.push_back(words[i]);
            }
            
        }
        
        return answer;
    }
};