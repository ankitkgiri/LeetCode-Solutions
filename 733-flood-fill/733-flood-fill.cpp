class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
     
        int o = image[sr][sc];
        
        if (o != newColor)
            helper(image, sr, sc, newColor, o);
        
        return image;
    }
    
    void helper(vector<vector<int>>& image, int sr, int sc, int newColor, int o){
        
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != o){
            return;
        }
        
        image[sr][sc] = newColor;
        helper(image, sr + 1, sc, newColor, o);
        helper(image, sr - 1, sc, newColor, o);
        helper(image, sr, sc + 1, newColor, o);
        helper(image, sr, sc - 1, newColor, o);
        
    }
};