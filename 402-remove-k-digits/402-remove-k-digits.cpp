class Solution {
public:
    string removeKdigits(string num, int k) {
        
        string ans = "";
        stack<char> st;
        int i = 0;
        
        if(k==num.size()){
            return "0";
        }
        
        while ( i < num.size()) {
           while (!st.empty() && k>0 && int(st.top()) > int(num[i])){
               st.pop();
               k--;
           }
               
               st.push(num[i]);
           
            
            i++;
        }
        
        while (!st.empty() and k>0){ st.pop();
                                   k--;
                                   }
        
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        ans.erase(0, min(ans.find_first_not_of('0'), ans.size()-1));
        return ans;
        
        
    }
};