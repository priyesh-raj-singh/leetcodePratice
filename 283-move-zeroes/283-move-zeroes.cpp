class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0 ; 
        for(int i =0  ; i<nums.size() ; i++){
            if(nums[i]!=0){
                nums[index] = nums[i];
                index++;
            }
        }
        for( ; index<nums.size() ; index++)
            nums[index] = 0;
        
    }
};