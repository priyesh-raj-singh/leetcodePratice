class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==0)
            return 0;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int mindiff = nums[n-1] + nums[0];
        int i = 0, j = i+k-1 ;
        while(j<n){
            mindiff = min(mindiff , nums[j]-nums[i]);
            i++;
            j++;
        }
        return mindiff;
    }
};