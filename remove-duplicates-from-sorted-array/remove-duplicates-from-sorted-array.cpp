class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s; 
        for(int i = 0 ; i<nums.size() ; i++){
            s.insert(nums[i]);
        }
        int i = 0 ; 
        for(auto num : s){
            nums[i]= num;
           i++;
        }
        return s.size();
            
        
    }
};