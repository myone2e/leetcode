#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int maxSell = 0;
        int profit, maxProfit = 0;
        
        for(int i = n-1; i >= 0; i--){
            maxSell = max(maxSell, prices[i]);
            profit = max(maxSell - prices[i], 0);
            maxProfit = max(maxProfit, profit);
        }
        
        return maxProfit;
    }
};