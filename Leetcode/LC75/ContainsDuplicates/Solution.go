func containsDuplicate(nums []int) bool {
    m := make(map[int]bool)
    
    for _, val := range nums {
        if _, ok := m[val]; ok {
            return true
        }
        m[val] = true
    }
    
    return false
}
