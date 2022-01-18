class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            
        int m = matrix.size();
        int n = matrix[0].size();
        
        int lo = 0;
        int hi = m*n - 1;
        int mid;
        
        while (lo <= hi) {
            mid = (lo + hi)/2;
            
            int val = matrix[mid/n][mid%n];
            cout << val << " ";
            if (val == target) {
                return true;
            } else if (val > target) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
            
        }
        cout << lo <<  " " << hi << "\n";
        
        return false;

    }
};