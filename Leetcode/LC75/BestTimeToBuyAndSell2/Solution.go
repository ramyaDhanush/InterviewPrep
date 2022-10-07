func max(a, b int) int {
    if(a>b){ return a }
    return b
}

func min(a, b int) int {
    if( a<b){return a }
    return b
}

func maxProfit(prices []int) int {
    profit := 0
    
    for idx , val := range prices[1:]{
        profit += max(0, val - prices[idx])
    }
    
    return profit
}
