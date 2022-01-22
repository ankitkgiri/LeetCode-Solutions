class Solution {
    
private:
    void DFS(vector<vector<char>>& grid, int i , int j,  vector<vector<bool>>& visited){
        if (i < 0 || j < 0 || j >= grid[0].size() || i >= grid.size() || grid[i][j] == '0' || visited[i][j] == true){
            return;
        }
        
        visited[i][j] = true;
        
        DFS(grid, i - 1, j, visited);
        DFS(grid, i + 1, j, visited);
        DFS(grid, i, j - 1, visited);
        DFS(grid, i, j + 1, visited);    
        
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<bool>> visited(m, vector<bool> (n, false));
        int count = 0;
        
        for (int i = 0; i < m; i++ ) {
            
            for (int j = 0; j < n; j++) {
                
                if (grid[i][j] == '1' && visited[i][j] == false){
                    
                    count++;
                    DFS(grid, i, j, visited);
                }
            }
        }
        
        return count;
    }
};