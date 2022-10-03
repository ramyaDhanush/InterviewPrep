class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> map;
        
        for(int i=0; i<n; i++) {
            int diff = target - nums[i];
            if(map.count(diff)) {
                return {map[diff], i};
            } else {
                map.insert({nums[i], i});
            }
        }
        
        return {};
    }
};
