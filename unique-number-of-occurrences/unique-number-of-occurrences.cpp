class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        unordered_map<int , int> mp; 
        unordered_map<int , int> check;
        for(int i = 0; i<nums.size() ;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            check[it.second]++;
        }
        for(auto it: check){
            if(it.second > 1)
                return false;
        }
        return true;
        
    }
};