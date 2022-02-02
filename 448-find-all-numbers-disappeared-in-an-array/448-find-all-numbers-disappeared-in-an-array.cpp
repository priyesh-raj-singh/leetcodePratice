class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> mp;
        vector<int> ans ;
        for(int i = 0 ; i<nums.size() ; i++){
            mp.insert(nums[i]);
        }
        
        for(int i = 1; i<=nums.size() ; i++){
            if(mp.find(i)==mp.end())
                ans.push_back(i);
                
        }
        return ans;
        
    }
};