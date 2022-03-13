class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        for(int i = 0 ; i<n-2; i++){
            if(i == 0 ||(i>0 && nums[i]!=nums[i-1])){
                int lo = i+1 ; 
                int hi = n-1;
                
                while(lo<hi){
                    int curSum = nums[i]+nums[lo]+nums[hi];
                    if(curSum==target) 
                        return target;
                    
                    if(abs(target-curSum)<abs(target - closest))
                        closest = curSum;
                    
                    if(curSum>target)
                        hi--;
                    else
                        lo++;
                }
            }
        }
        return closest;
        
    }
};