class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxi = 0;
        
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++) {
                int area = 0;
                if (grid[i][j] == 1) {
                    helper(grid, i, j, area);                    
                    maxi = max(maxi, area);
                }
            }
        }
        
        return maxi;
    }
    
    void helper(vector<vector<int>>& grid, int i, int j, int& area) {
        
        if (i < 0 || i == grid.size() || j < 0 || j == grid[0].size() || grid[i][j] != 1){
            return;
        }
        
        grid[i][j]++;
        area++;
        helper(grid, i + 1, j, area);
        helper(grid, i - 1, j, area);
        helper(grid, i , j - 1, area);
        helper(grid, i , j + 1, area);
        
    }
};