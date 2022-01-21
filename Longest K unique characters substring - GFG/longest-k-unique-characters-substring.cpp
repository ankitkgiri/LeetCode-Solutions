// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
            
            int start = 0; 
            int maxi = -1;
            unordered_map<char, int> mp;
            
            for (int end = 0; end < s.length(); end++) {
                
                mp[s[end]]++;
              
                while (mp.size() > k){
                    
                    mp[s[start]]--;
                    if (mp[s[start]] == 0){
                        mp.erase(s[start]);
                    }
                    start++;
                }
                
                //cout << mp.size() << " ";
                if (mp.size() == k){
                    maxi = max(end - start + 1, maxi);
                }
            }
            
        return maxi;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends