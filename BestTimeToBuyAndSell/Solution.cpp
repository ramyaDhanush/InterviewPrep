class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int size = prices.size();
        int profit = 0, minSoFar = INT_MAX;
        
        for(int i=0; i<size; i++) {
            minSoFar = min(minSoFar, prices[i]);
            profit = max(profit, prices[i] - minSoFar);
        }
        
        return profit;

    }
};
