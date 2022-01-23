class Solution {
public:
    int cnt = 0;
    int countArrangement(int n) {
        
        vector<int> arr(n + 1);
        
        for (int i = 1; i <= n; i++) arr[i] = i;
        
        permute(arr, n);
        
        return cnt;
    }
    
    void permute(vector<int>&arr, int idx) {
        
        if (idx == 0){
            cnt++;
            return;
        }
        
        
        for (int i = idx; i > 0; i--){
            
            swap(arr[i], arr[idx]);
            
            if (idx % arr[idx] == 0 || arr[idx] % idx == 0){
                permute(arr, idx - 1);
            }
            
            swap(arr[i], arr[idx]);
        }
    }
    
    
};