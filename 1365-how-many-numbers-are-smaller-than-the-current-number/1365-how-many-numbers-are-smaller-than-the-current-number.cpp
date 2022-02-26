class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> ans = nums;
        sort(ans.begin() , ans.end());
        for(int i = n-1 ; i>=0 ; i--)
            mp[ans[i]] = i;
        
        for(int i = 0 ; i<nums.size() ; i++){
           
                nums[i] = mp[nums[i]];
        }
        return nums;
        
    }
};