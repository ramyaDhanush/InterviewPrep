func containsNearbyDuplicate(nums []int, k int) bool {
    m := make(map[int]int)
    
    for idx, val := range nums {
        if val, ok := m[val]; ok {
            if idx - val <= k {
                return true
            }
        }
        m[val] = idx
    }
    
    return false
}
