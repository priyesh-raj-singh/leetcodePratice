class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int , int> mp;
        vector<int> ans = nums;
        sort(ans.begin() , ans.end());
        int n = nums.size();
        for(int i = n-1 ; i>=0 ; i--)
            mp[ans[i]] = i;
        
        for(int i = 0 ; i<n ; i++)
            nums[i] = mp[nums[i]];
        
        return nums;
        
    }
};