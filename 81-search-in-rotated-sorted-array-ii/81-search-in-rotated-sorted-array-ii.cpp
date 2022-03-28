class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0 ;
        int hi = nums.size()-1;
        while(l<=hi){
            int mid = l + (hi-l)/2;
            if(nums[mid]==target)
                return true;
            if((nums[l] ==nums[mid]) && nums[hi] ==nums[mid]){
                l++;
                hi--;
            }
            else if(nums[l]<=nums[mid]){
                if((nums[l]<=target) && (nums[mid] > target))
                    hi = mid-1;
                else
                    l = mid+1;
                
            }
            else{
                if((nums[hi]>=target) && (nums[mid] <target))
                    l = mid+1;
                else
                    hi = mid-1;
                    
            }
            
        }
        return false;
        
    }
};