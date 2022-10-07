class Solution {
    public int maxProfit(int[] prices) {
        int size = prices.length;
        int profit = 0, minSoFar = Integer.MAX_VALUE;
        
        for(int i=0; i<size; i++) {
            minSoFar = Math.min(minSoFar, prices[i]);
            profit = Math.max(profit, prices[i] - minSoFar);
        }
        
        return profit;
    }
}
