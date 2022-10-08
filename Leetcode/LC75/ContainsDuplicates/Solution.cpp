class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_set<int> s;
        
        for(int i:nums) {
            if(s.count(i)) return true;
            s.insert(i);
        }
        
        return false;
    }
};
