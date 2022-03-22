class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        int x = 0;
        int y = *max_element(nums.begin() , nums.end());
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]==y)
                x = i;
            
        }
        sort(nums.begin() , nums.end(), greater<int>());
        if(nums[1]<=nums[0]/2)
            return x;
        return -1;
    
        
    }
};