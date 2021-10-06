class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s ; 
        for(auto num: nums){
            s.insert(num);
        }
        int i = 0; 
        for(auto num:s){
            nums[i]= num;
            i++;
        }
        return s.size();
        
    }
};