class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int start = 0, end  = 0;
        int maxi = INT_MIN;
        int temp_k = 0;
        for (int end = 0; end < n; end++)
        {
            if (nums[end] == 0) {
                temp_k++;
            }

                    
            while (temp_k > k){
                if (nums[start] == 0) temp_k--;

                start++;
            }

                        
            maxi = max(end - start + 1, maxi);
        }


        
        return maxi;
    }
};