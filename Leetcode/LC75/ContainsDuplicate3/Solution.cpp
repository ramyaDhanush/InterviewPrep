class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n = nums.size();
        
        for(int i=0; i<n; i++) {
            int start = i+1;
            int end = i + indexDiff;
            
            while(start<n && start <= end) {
                int diff = nums[i] - nums[start];
                if(abs(diff) <= valueDiff) return true;
                start++;
            }
        }
        
        return false;
    }
};

// TLE
