class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int indexDiff, int valueDiff) {
        int n = nums.length;
        
        for(int i=0; i<n; i++) {
            int start = i+1;
            int end = i + indexDiff;
            
            while(start<n && start <= end) {
                int diff = nums[i] - nums[start];
                if(Math.abs(diff) <= valueDiff) return true;
                start++;
            }
        }
        
        return false;
    }
}
