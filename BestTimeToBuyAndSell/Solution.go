
func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}

func max(a, b int) int {
    if a < b {
        return b
    }
    return a
}

func maxProfit(prices []int) int {
    
    var profit int = 0
    var minVal int = prices[0]
    
    for _, val := range prices {
        minVal = int(min(minVal, val))
        profit = int(max(profit, val - minVal))
    }
    
    return profit
}
