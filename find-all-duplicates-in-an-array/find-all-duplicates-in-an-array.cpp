
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        
        unordered_map<int,int> mpp;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(mpp.find(nums[i]) != mpp.end())
            {
                ans.push_back(nums[i]);       
            }
            else{
                mpp[nums[i]]= i;             
            }
        }
        return ans;
    }
};
