class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i = 0 ; i<nums.size() ; i++){
            maxi = max(maxi , nums[i]);
        }
        
        for(int i = 0 ; i<nums.size() ; i++){
            if(maxi ==nums[i])
                return i;
        }
        return 0;
        
    }
};