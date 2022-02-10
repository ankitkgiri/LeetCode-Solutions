class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        
        int sum = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            int temp_sum = 0;
            
            for (int j = i; j < n; j++) {
                
                temp_sum += arr[j];
                
                if ((i - j)%2 == 0) {
                    sum += temp_sum;
                }
                
            }
            
        }
        
        return sum;
    }
};