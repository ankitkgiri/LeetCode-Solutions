class Solution {
    
    int dfs(int i, int j, int m , int n,  vector<vector<int>>& dp) {
        
        
        if (i == m - 1 && j == n - 1) {
            dp[i][j] = 1;
            return 1;
        }
        
        if (i >= m || j >= n ){
            
            return 0;            
        }
        
        int answer = 0;
       
 
        if (dp[i + 1][j] == -1) {
            answer += dfs( i + 1, j, m, n, dp);
             cout << i << " " << j << "\n";
            dp[i][j] = answer;
        }
        else 
            answer += dp[i + 1][j];

        
        if (dp[i][j + 1] == -1){ 
            answer += dfs( i, j + 1, m, n, dp);
             cout << i << " " << j << "\n";
            dp[i][j] = answer;
        } else 
            answer += dp[i][j + 1 ];
        
        
        
        
        return answer;
        
    }
    public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m + 1, vector<int> (n + 1, -1));
        
       int ans = dfs(0, 0, m , n, dp);
       // int ans = 0;
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++){
//                 cout << i << j << " ";
//             }
//             cout << "\n";
//         }
        
        
        return ans;
        
    }
};