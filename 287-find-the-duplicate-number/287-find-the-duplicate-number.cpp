class Solution {
public:
    bool isCntLessThanMid(int mid , vector<int> &nums){
        int cnt = 0;
        for(int i = 0 ;i<nums.size();i++){
            if(nums[i]<=mid){
                cnt++;
            }
        }
        return (cnt<=mid);
    }
    int findDuplicate(vector<int>& nums) {
        int l = 1;
        int h = nums.size()-1;
        
        while(l<=h){
            int mid = l+(h-l)/2;
            if(isCntLessThanMid(mid , nums)){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return l;
        
    }
};