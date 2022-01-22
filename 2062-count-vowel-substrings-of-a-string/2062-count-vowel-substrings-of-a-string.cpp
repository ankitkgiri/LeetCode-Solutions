class Solution {
    private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o';
    }
    
    int util(string word, int k) {
        
        int n = word.length();
        
        int left = 0;
        int cnt = 0;
        unordered_map<char, int> map;
        for (int i = 0; i < n; i++) {
            if (!isVowel(word[i])){
               map.clear();
                left = i+1;    
                continue;
            }
            
            map[word[i]]++;
                
            while (left < i && map.size() > k){

                map[word[left]]--;
                if (map[word[left]] == 0) {
                    map.erase(word[left]);
                }

                left++;
            }
            cnt +=( i+1 - left);

        }
        
        return cnt;
    }
public:
    int countVowelSubstrings(string word) {
        
       
        return util(word, 5) - util(word, 4);

    }
};