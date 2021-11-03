class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s = nums.size();
        int maj = nums[0], cnt = 1;
        for(int i=1;i<s;i++) {
            if(nums[i]==maj) {
                cnt++;
            }
            else
                cnt--;
            if(cnt<0) {
                cnt = 1;
                maj = nums[i];
            }
                
        }
        return maj;
    }
};