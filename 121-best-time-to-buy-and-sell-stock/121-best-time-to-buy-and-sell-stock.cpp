class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int min  = INT_MAX;
        int profit = 0;
        
        for (int i = 0; i < n; i++) {
            if (min > prices[i]){
                min = prices[i];
            }
            
            int temp_profit = prices[i] - min;
            
            if (temp_profit > profit){
                profit = temp_profit;
            }
        }
        
        return profit;
    }
};