func twoSum(nums []int, target int) []int {
    
    indexMap := make(map[int]int)
    for idx, val := range nums {
        if dIdx, isExist := indexMap[target - val]; isExist {
            return []int{idx, dIdx}
        }
        indexMap[val] = idx
    }
    return []int{}
}
