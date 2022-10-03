class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> indexMap = new HashMap<Integer, Integer>();
        
        for(int i=0; i<nums.length; i++) {
            if(indexMap.containsKey(target - nums[i])) {
                int res[] = {indexMap.get(target- nums[i]), i};
                return res;
            }
            indexMap.put(nums[i], i);
        }
        
        return null;
    }
}
