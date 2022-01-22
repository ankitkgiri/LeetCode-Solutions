class Solution {
public:
    
    void DFS(vector<vector<int>>& grid, int i, int j, int id, int& count) {
        
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid.size() || grid[i][j] != 1){
            return;
        } 
        
        count++;
        grid[i][j] = id;
        DFS(grid, i - 1, j, id, count);
        DFS(grid, i + 1, j, id, count);
        DFS(grid, i, j - 1, id, count);
        DFS(grid, i, j + 1, id, count);
    }
    
    int getMax(vector<vector<int>>& grid, int i, int j, unordered_map<int, int>& mp) {
        
        int count = 1;
            //cout << i << " " << j << "\n";
      
            set<int> st;
            if (i - 1 >= 0 && grid[i - 1][j] != 0) {
                st.insert(grid[i - 1][j]);
              
            }
            if (i + 1 < grid.size() && grid[i + 1][j] != 0) {
                st.insert(grid[i + 1][j]);
            
            }
            if (j - 1 >= 0 && grid[i][j - 1] != 0) {
                
                st.insert(grid[i][j - 1]);
              
            }
            if (j + 1 < grid.size() && grid[i][j + 1] != 0) {
                st.insert(grid[i][j + 1]);
                
            }
        
        
            for (int a : st){
                //cout << a << ":" << mp[a] << " \n";
                count += mp[a];
            }
          //  cout << count << "\n";

        return count;   
    }
    int largestIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        unordered_map<int, int> mp;
        
        int id = 2;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int count = 0;
                if (grid[i][j] == 1){
                    DFS(grid, i, j, id, count);
                    mp[id] = count;
                    maxi = max(maxi, count);
                   // cout << mp[id] << " ";
                    id++;
                }
  
            }
        }
        
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cout << grid[i][j] << " ";
//             } cout << "\n";
//         }
//         for (auto a: mp) {
//             cout << a.first << " " << a.second << "\n";
//         }
        
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0){
                    int max_temp = getMax(grid, i, j, mp);
                   // cout << max_temp << " ";
                    maxi = std::max(max_temp, maxi);
                }
            }
        }
        //cout << getMax(grid, 3, 3, mp);
        
        return maxi;
        
    }
};