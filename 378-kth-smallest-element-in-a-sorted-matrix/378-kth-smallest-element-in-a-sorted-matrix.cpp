class Solution {
public:
    
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
          
        vector<int> merged;
        int n = matrix.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                merged.push_back(matrix[i][j]);
            }
        }
        
        for (auto a: merged) cout << a << " ";
        cout << "\n";
        sort(merged.begin(), merged.end());
        return merged[k - 1];
    
    }
};