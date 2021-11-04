class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto a = lower_bound(nums.begin() , nums.end() , target);
        auto b = upper_bound(nums.begin() , nums.end() , target);
        int c = a - nums.begin();
        int d = b - nums.begin()-1;
        if(c>d){
            return {-1,-1};
            
        }
        return {c,d};
        
    }
};