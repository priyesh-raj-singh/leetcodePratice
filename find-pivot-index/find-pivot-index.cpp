class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 1;
        }
        int sum = 0 ; 
        int right = 0 ;
        for(int i = 0 ; i<n ; i++){
            sum+=nums[i];
        }
        for(int i = 0 ; i<n ; i++){
            sum-=nums[i];
            if(sum==right){
                return i;
        }
        right+=nums[i];
        }
        return -1;
        
    }
};