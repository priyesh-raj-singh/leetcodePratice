class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        stack<int> st;
        st.push(nums[0]);
        int diff = 0;
        for(int i = 1 ; i<nums.size() ; i++){
            if(nums[i]>st.top()){
                diff = nums[i]-st.top();
                ans = max(ans , diff);
            }
            else{
                st.pop();
                st.push(nums[i]);
            }
        }
        return ans;
        
    }
};